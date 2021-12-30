/*
 *
 * Tencent is pleased to support the open source community by making
 * Hippy available.
 *
 * Copyright (C) 2019 THL A29 Limited, a Tencent company.
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#pragma once

#include <jni.h>

class NativeRenderProvider {
 public:
  static void Init();

  static void Destroy();
};

void CreateNativeRenderDelegate(JNIEnv* j_env,
                                jobject j_obj,
                                jlong j_runtime_id,
                                jfloat j_density);

void UpdateRootSize(JNIEnv* j_env, jobject j_obj, jlong j_runtime_id,
                    jfloat width, jfloat height);

void OnReceivedUIComponentEvent(JNIEnv *j_env, jobject j_object,
                                jlong j_runtime_id, jint j_dom_id, jstring j_event_name,
                                jbyteArray j_buffer, jint j_length);

void OnReceivedNativeGestureEvent(JNIEnv *j_env, jobject j_object,
                                  jlong j_runtime_id, jint j_dom_id, jstring j_event_name,
                                  jbyteArray j_buffer, jint j_length);