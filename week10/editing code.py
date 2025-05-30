##EDITING CODE
def takePhoto():
    cap = cv2.VideoCapture(0)
    cap.set(cv2.CAP_PROP_FRAME_WIDTH, 640)
    cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 480)
    if not cap.isOpened():
        print("camera open error")
        return
    ret, image=cap.read()
    if not ret:
        print("frame read error")
        return
    cv2.imshow("CAMERA", image)
    time.sleep(1)
    cv2.imwrite("./image.jpg",image)
    cap.release()
    cv2.destroyAllWindows()
