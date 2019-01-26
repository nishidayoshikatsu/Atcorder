#%%
N = int(input())

import numpy as np
import cv2

# Create a black image
#img = np.zeros((100,100), np.uint8)     #値が0のnumpy配列を100×100の形で作る
img = np.full((N,N),255, np.uint8)     #値が0のnumpy配列を100×100の形で作る
#img.fill(255)

#cv2.imwrite('origin.jpg', img)

h, w = img.shape[:2]
size = (w, h)

# 回転角の指定
angle = 45
angle_rad = angle/180.0*np.pi

# 回転後の画像サイズを計算
w_rot = int(np.round(h*np.absolute(np.sin(angle_rad))+w*np.absolute(np.cos(angle_rad))))
h_rot = int(np.round(h*np.absolute(np.cos(angle_rad))+w*np.absolute(np.sin(angle_rad))))
size_rot = (w_rot, h_rot)

# 元画像の中心を軸に回転する
center = (w/2, h/2)
scale = 1.0
rotation_matrix = cv2.getRotationMatrix2D(center, angle, scale)


# 平行移動を加える (rotation + translation)
affine_matrix = rotation_matrix.copy()
affine_matrix[0][2] = affine_matrix[0][2] -w/2 + w_rot/2
affine_matrix[1][2] = affine_matrix[1][2] -h/2 + h_rot/2

img = cv2.warpAffine(img, affine_matrix, size_rot, flags=cv2.INTER_CUBIC)


img = cv2.resize(img,(N, N))

#cv2.imwrite('image.jpg', img)
print(img)
cnt = 0
for i in range(N):
    for j in range(N):
        #print(img[i, j])
        if img[i, j] == 255:
            cnt += 1

print(cnt)