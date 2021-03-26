// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "IconSource.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(IconSource)
}

#include "IconSource.g.cpp"

GlobalDependencyProperty IconSourceProperties::s_ForegroundProperty{ nullptr };

IconSourceProperties::IconSourceProperties()
{
    EnsureProperties();
}

void IconSourceProperties::EnsureProperties()
{
    if (!s_ForegroundProperty)
    {
        s_ForegroundProperty =
            InitializeDependencyProperty(
                L"Foreground",
                winrt::name_of<winrt::Brush>(),
                winrt::name_of<winrt::IconSource>(),
                false /* isAttached */,
                ValueHelper<winrt::Brush>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnForegroundPropertyChanged));
    }
}

void IconSourceProperties::ClearProperties()
{
    s_ForegroundProperty = nullptr;
}

void IconSourceProperties::OnForegroundPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::IconSource>();
    winrt::get_self<IconSource>(owner)->OnPropertyChanged(args);
}

void IconSourceProperties::Foreground(winrt::Brush const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<IconSource*>(this)->SetValue(s_ForegroundProperty, ValueHelper<winrt::Brush>::BoxValueIfNecessary(value));
    }
}

winrt::Brush IconSourceProperties::Foreground()
{
    return ValueHelper<winrt::Brush>::CastOrUnbox(static_cast<IconSource*>(this)->GetValue(s_ForegroundProperty));
}
