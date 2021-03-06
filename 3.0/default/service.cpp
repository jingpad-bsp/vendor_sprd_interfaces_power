/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define LOG_TAG "vendor.sprd.hardware.power@3.0-service"

#include <vendor/sprd/hardware/power/3.0/IPower.h>
#include <hidl/LegacySupport.h>

using ::vendor::sprd::hardware::power::V3_0::IPower;
using ::android::hardware::defaultPassthroughServiceImplementation;

int main() {
    return defaultPassthroughServiceImplementation<IPower>();

    /*
    configureRpcThreadpool(10, true);

    android::sp<vendor::sprd::hardware::power::V3_0::IPower> service =
        new vendor::sprd::hardware::power::V3_0::implementation::Power();
    service->registerAsService();

    joinRpcThreadpool();
    return 0;
    */
}
