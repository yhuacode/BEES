/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_test_NativeUtil */

#ifndef _Included_com_example_test_NativeUtil
#define _Included_com_example_test_NativeUtil
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_test_NativeUtil
 * Method:    computeDescripors
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_example_test_NativeUtil_computeDescripors
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     com_example_test_NativeUtil
 * Method:    detectFeatures
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_example_test_NativeUtil_detectFeatures
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     com_example_test_NativeUtil
 * Method:    transformToGray
 * Signature: ([III)[I
 */
JNIEXPORT jintArray JNICALL Java_com_example_test_NativeUtil_transformToGray
  (JNIEnv *, jclass, jintArray, jint, jint);

/*
 * Class:     com_example_test_NativeUtil
 * Method:    stringFromJNI
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_test_NativeUtil_stringFromJNI
  (JNIEnv *, jclass);

/*
 * Class:     com_example_test_NativeUtil
 * Method:    unimplementedStringFromJNI
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_test_NativeUtil_unimplementedStringFromJNI
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
