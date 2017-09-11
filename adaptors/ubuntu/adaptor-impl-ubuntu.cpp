/*
 * Copyright (c) 2014 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

// CLASS HEADER
#include <adaptor-impl.h>

namespace Dali
{

namespace Internal
{

namespace Adaptor
{

void Adaptor::GetDataStoragePath( std::string& path)
{
  path = DALI_SHADERBIN_DIR;
}

void Adaptor::GetAppId( std::string& appId )
{
  appId = "";
}

void Adaptor::SurfaceInitialized()
{
}

void Adaptor::SetupSystemInformation()
{
}

} // namespace Adaptor

} // namespace Internal

} // namespace Dali
