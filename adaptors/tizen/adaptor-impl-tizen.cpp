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

// EXTERNAL INCLUDES
#include <app_common.h>
#ifdef APPCORE_WATCH_AVAILABLE
#include <screen_connector_provider.h>
#include <ecore-wl-render-surface.h>
#endif

namespace Dali
{

namespace Internal
{

namespace Adaptor
{

void Adaptor::GetDataStoragePath( std::string& path)
{
#ifdef USE_APPFW
  char *pathInt = app_get_data_path();
  if ( pathInt )
  {
    path = pathInt;
    free( pathInt );
  }
  else
  {
    path = "";
  }
#endif

}

void Adaptor::GetAppId( std::string& appId )
{
#ifdef USE_APPFW
  char *id;
  app_get_id(&id);
  if ( id )
  {
    appId = id;
  }
  else
  {
    appId = "";
  }
#endif
}

void Adaptor::SurfaceInitialized()
{
#ifdef APPCORE_WATCH_AVAILABLE
  if ( !mUseRemoteSurface )
  {
    return;
  }
  char *appId;
  app_get_id(&appId);

  Ecore_Wl_Window* ecoreWlWindow = AnyCast<Ecore_Wl_Window*>( mNativeWindow );
  screen_connector_provider_remote_enable(appId, ecore_wl_window_surface_get(ecoreWlWindow));
#endif
}

} // namespace Adaptor

} // namespace Internal

} // namespace Dali