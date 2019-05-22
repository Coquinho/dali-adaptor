#ifndef DALI_INTERNAL_WIDGET_APPLICATION_H
#define DALI_INTERNAL_WIDGET_APPLICATION_H

/*
 * Copyright (c) 2017 Samsung Electronics Co., Ltd.
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

// INTERNAL INCLUDES
#include <application-impl.h>
#include <widget-application.h>

namespace Dali
{
class Widget;

namespace Internal
{

namespace Adaptor
{

class WidgetApplication;
typedef IntrusivePtr<WidgetApplication> WidgetApplicationPtr;

/**
 * Implementation of the WidgetApplication class.
 */
class WidgetApplication : public Application
{
public:

  typedef std::pair<const std::string, Dali::WidgetApplication::CreateWidgetFunction >  CreateWidgetFunctionPair;
  typedef std::vector< CreateWidgetFunctionPair >   CreateWidgetFunctionContainer;

  /**
   * Create a new widget application
   * @param[in]  argc         A pointer to the number of arguments
   * @param[in]  argv         A pointer to the argument list
   * @param[in]  stylesheet   The path to user defined theme file
   */
  static WidgetApplicationPtr New( int* argc, char **argv[], const std::string& stylesheet );

public:

  /**
   * @copydoc Dali::WidgetApplication::RegisterWidgetCreator()
   */
  void RegisterWidgetCreatingFunction( const std::string& widgetName, Dali::WidgetApplication::CreateWidgetFunction createFunction );

protected:

  /**
   * Private Constructor
   * @param[in]  argc         A pointer to the number of arguments
   * @param[in]  argv         A pointer to the argument list
   * @param[in]  stylesheet   The path to user defined theme file
   */
  WidgetApplication( int* argc, char **argv[], const std::string& stylesheet );

  /**
   * Destructor
   */
  virtual ~WidgetApplication();

  // Undefined
  WidgetApplication(const Application&);
  WidgetApplication& operator=(Application&);


};

inline WidgetApplication& GetImplementation(Dali::WidgetApplication& widgetApplication)
{
  DALI_ASSERT_ALWAYS(widgetApplication && "widget application handle is empty");

  BaseObject& handle = widgetApplication.GetBaseObject();

  return static_cast<Internal::Adaptor::WidgetApplication&>(handle);
}

inline const WidgetApplication& GetImplementation(const Dali::WidgetApplication& widgetApplication)
{
  DALI_ASSERT_ALWAYS(widgetApplication && "widget application handle is empty");

  const BaseObject& handle = widgetApplication.GetBaseObject();

  return static_cast<const Internal::Adaptor::WidgetApplication&>(handle);
}

} // namespace Adaptor

} // namespace Internal

} // namespace Dali

#endif // DALI_INTERNAL_WIDGET_APPLICATION_H