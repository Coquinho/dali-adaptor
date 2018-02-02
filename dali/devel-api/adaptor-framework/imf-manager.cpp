/*
 * Copyright (c) 2018 Samsung Electronics Co., Ltd.
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
#include <dali/devel-api/adaptor-framework/imf-manager.h>

// INTERNAL INCLUDES
#include <dali/internal/input/common/imf-manager-impl.h>
#include <dali/internal/adaptor/common/adaptor-impl.h>

namespace Dali
{

ImfManager::ImfManager()
{
}

ImfManager::~ImfManager()
{
}

void ImfManager::Finalize()
{
  Internal::Adaptor::ImfManager::GetImplementation(*this).Finalize();
}

ImfManager ImfManager::Get()
{
  return Internal::Adaptor::ImfManager::Get();
}

void ImfManager::Activate()
{
  Internal::Adaptor::ImfManager::GetImplementation(*this).Activate();
}

void ImfManager::Deactivate()
{
  Internal::Adaptor::ImfManager::GetImplementation(*this).Deactivate();
}

bool ImfManager::RestoreAfterFocusLost() const
{
  return Internal::Adaptor::ImfManager::GetImplementation(*this).RestoreAfterFocusLost();
}

void ImfManager::SetRestoreAfterFocusLost( bool toggle )
{
  Internal::Adaptor::ImfManager::GetImplementation(*this).SetRestoreAfterFocusLost( toggle );
}

void ImfManager::Reset()
{
  Internal::Adaptor::ImfManager::GetImplementation(*this).Reset();
}

void ImfManager::NotifyCursorPosition()
{
  Internal::Adaptor::ImfManager::GetImplementation(*this).NotifyCursorPosition();
}

void ImfManager::SetCursorPosition( unsigned int SetCursorPosition )
{
  Internal::Adaptor::ImfManager::GetImplementation(*this).SetCursorPosition( SetCursorPosition );
}

unsigned int ImfManager::GetCursorPosition() const
{
  return Internal::Adaptor::ImfManager::GetImplementation(*this).GetCursorPosition();
}

void ImfManager::SetSurroundingText( const std::string& text )
{
  Internal::Adaptor::ImfManager::GetImplementation(*this).SetSurroundingText( text );
}

const std::string& ImfManager::GetSurroundingText() const
{
  return Internal::Adaptor::ImfManager::GetImplementation(*this).GetSurroundingText();
}

void ImfManager::NotifyTextInputMultiLine( bool multiLine )
{
  Internal::Adaptor::ImfManager::GetImplementation(*this).NotifyTextInputMultiLine( multiLine );
}

ImfManager::TextDirection ImfManager::GetTextDirection()
{
  return Internal::Adaptor::ImfManager::GetImplementation(*this).GetTextDirection();
}

Rect<int> ImfManager::GetInputMethodArea()
{
  return Internal::Adaptor::ImfManager::GetImplementation(*this).GetInputMethodArea();
}

void ImfManager::ApplyOptions( const InputMethodOptions& options )
{
  Internal::Adaptor::ImfManager::GetImplementation(*this).ApplyOptions( options );
}

void ImfManager::SetInputPanelData( const std::string& data )
{
  Internal::Adaptor::ImfManager::GetImplementation(*this).SetInputPanelData( data );
}

void ImfManager::GetInputPanelData( std::string& data )
{
  Internal::Adaptor::ImfManager::GetImplementation(*this).GetInputPanelData( data );
}

Dali::ImfManager::State ImfManager::GetInputPanelState()
{
  return Internal::Adaptor::ImfManager::GetImplementation(*this).GetInputPanelState();
}

void ImfManager::SetReturnKeyState( bool visible )
{
  Internal::Adaptor::ImfManager::GetImplementation(*this).SetReturnKeyState( visible );
}

void ImfManager::AutoEnableInputPanel( bool enabled )
{
  Internal::Adaptor::ImfManager::GetImplementation(*this).AutoEnableInputPanel( enabled );
}

void ImfManager::ShowInputPanel()
{
  Internal::Adaptor::ImfManager::GetImplementation(*this).ShowInputPanel();
}

void ImfManager::HideInputPanel()
{
  Internal::Adaptor::ImfManager::GetImplementation(*this).HideInputPanel();
}

Dali::ImfManager::KeyboardType ImfManager::GetKeyboardType()
{
  return Internal::Adaptor::ImfManager::GetImplementation(*this).GetKeyboardType();
}

std::string ImfManager::GetInputPanelLocale()
{
  return Internal::Adaptor::ImfManager::GetImplementation(*this).GetInputPanelLocale();
}

ImfManager::ImfManagerSignalType& ImfManager::ActivatedSignal()
{
  return Internal::Adaptor::ImfManager::GetImplementation(*this).ActivatedSignal();
}

ImfManager::ImfEventSignalType& ImfManager::EventReceivedSignal()
{
  return Internal::Adaptor::ImfManager::GetImplementation(*this).EventReceivedSignal();
}

ImfManager::StatusSignalType& ImfManager::StatusChangedSignal()
{
  return Internal::Adaptor::ImfManager::GetImplementation(*this).StatusChangedSignal();
}

ImfManager::KeyboardResizedSignalType& ImfManager::ResizedSignal()
{
  return Internal::Adaptor::ImfManager::GetImplementation(*this).ResizedSignal();
}

ImfManager::LanguageChangedSignalType& ImfManager::LanguageChangedSignal()
{
  return Internal::Adaptor::ImfManager::GetImplementation(*this).LanguageChangedSignal();
}

ImfManager::KeyboardTypeSignalType& ImfManager::KeyboardTypeChangedSignal()
{
  return Internal::Adaptor::ImfManager::GetImplementation(*this).KeyboardTypeChangedSignal();
}

ImfManager::ImfManager(Internal::Adaptor::ImfManager *impl)
  : BaseHandle(impl)
{
}

} // namespace Dali
