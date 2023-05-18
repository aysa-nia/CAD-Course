from PIL import Image
import numpy as np
import cv2
image = cv2.imread('cat.jpg' , 0)
image = cv2.resize(image , (128,128))

np.savetxt('picture.txt', image , delimiter=',') 