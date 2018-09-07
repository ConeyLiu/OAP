/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_apache_spark_unsafe_PMPlatform */

#ifndef _Included_org_apache_spark_unsafe_PMPlatform
#define _Included_org_apache_spark_unsafe_PMPlatform
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_apache_spark_unsafe_PMPlatform
 * Method:    initializeNative
 * Signature: (Ljava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_org_apache_spark_unsafe_PMPlatform_initializeNative
  (JNIEnv *, jclass, jstring, jlong);

/*
 * Class:     org_apache_spark_unsafe_PMPlatform
 * Method:    allocateMemory
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_spark_unsafe_PMPlatform_allocateMemory
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_apache_spark_unsafe_PMPlatform
 * Method:    getOccupiedSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_spark_unsafe_PMPlatform_getOccupiedSize
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_apache_spark_unsafe_PMPlatform
 * Method:    freeMemory
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_apache_spark_unsafe_PMPlatform_freeMemory
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
