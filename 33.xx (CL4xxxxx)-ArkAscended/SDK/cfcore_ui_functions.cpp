#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class cfcore_ui.BindButtonSystem
// (None)

class UClass* UBindButtonSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BindButtonSystem");

	return Clss;
}


// BindButtonSystem cfcore_ui.Default__BindButtonSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UBindButtonSystem* UBindButtonSystem::GetDefaultObj()
{
	static class UBindButtonSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UBindButtonSystem*>(UBindButtonSystem::StaticClass()->DefaultObject);

	return Default;
}


// Function cfcore_ui.BindButtonSystem.StartBind
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBindButtonSystem::StartBind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BindButtonSystem", "StartBind");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.BindButtonSystem.SetViewState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EViewState              NewState                                                         (ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

void UBindButtonSystem::SetViewState(enum class EViewState* NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BindButtonSystem", "SetViewState");

	Params::UBindButtonSystem_SetViewState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewState != nullptr)
		*NewState = Parms.NewState;

}


// Function cfcore_ui.BindButtonSystem.EndBind
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBindButtonSystem::EndBind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BindButtonSystem", "EndBind");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.BindButtonSystem.ControllerAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UBindButtonSystem::ControllerAction(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BindButtonSystem", "ControllerAction");

	Params::UBindButtonSystem_ControllerAction_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class cfcore_ui.CFCoreButtonImage
// (None)

class UClass* UCFCoreButtonImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CFCoreButtonImage");

	return Clss;
}


// CFCoreButtonImage cfcore_ui.Default__CFCoreButtonImage
// (Public, ClassDefaultObject, ArchetypeObject)

class UCFCoreButtonImage* UCFCoreButtonImage::GetDefaultObj()
{
	static class UCFCoreButtonImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UCFCoreButtonImage*>(UCFCoreButtonImage::StaticClass()->DefaultObject);

	return Default;
}


// Class cfcore_ui.CFCoreGamepadCursorSettings
// (None)

class UClass* UCFCoreGamepadCursorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CFCoreGamepadCursorSettings");

	return Clss;
}


// CFCoreGamepadCursorSettings cfcore_ui.Default__CFCoreGamepadCursorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UCFCoreGamepadCursorSettings* UCFCoreGamepadCursorSettings::GetDefaultObj()
{
	static class UCFCoreGamepadCursorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UCFCoreGamepadCursorSettings*>(UCFCoreGamepadCursorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class cfcore_ui.CFCoreMathHelperFunctionLibrary
// (None)

class UClass* UCFCoreMathHelperFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CFCoreMathHelperFunctionLibrary");

	return Clss;
}


// CFCoreMathHelperFunctionLibrary cfcore_ui.Default__CFCoreMathHelperFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UCFCoreMathHelperFunctionLibrary* UCFCoreMathHelperFunctionLibrary::GetDefaultObj()
{
	static class UCFCoreMathHelperFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UCFCoreMathHelperFunctionLibrary*>(UCFCoreMathHelperFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int64_SubOne
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// int64                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCFCoreMathHelperFunctionLibrary::Int64_SubOne(int64 Value, int64 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreMathHelperFunctionLibrary", "Int64_SubOne");

	Params::UCFCoreMathHelperFunctionLibrary_Int64_SubOne_Params Parms{};

	Parms.Value = Value;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int64_AddOne
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// int64                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCFCoreMathHelperFunctionLibrary::Int64_AddOne(int64 Value, int64 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreMathHelperFunctionLibrary", "Int64_AddOne");

	Params::UCFCoreMathHelperFunctionLibrary_Int64_AddOne_Params Parms{};

	Parms.Value = Value;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int32_SubOne
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCFCoreMathHelperFunctionLibrary::Int32_SubOne(int32 Value, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreMathHelperFunctionLibrary", "Int32_SubOne");

	Params::UCFCoreMathHelperFunctionLibrary_Int32_SubOne_Params Parms{};

	Parms.Value = Value;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int32_AddOne
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCFCoreMathHelperFunctionLibrary::Int32_AddOne(int32 Value, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreMathHelperFunctionLibrary", "Int32_AddOne");

	Params::UCFCoreMathHelperFunctionLibrary_Int32_AddOne_Params Parms{};

	Parms.Value = Value;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class cfcore_ui.CFCoreRichText
// (None)

class UClass* UCFCoreRichText::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CFCoreRichText");

	return Clss;
}


// CFCoreRichText cfcore_ui.Default__CFCoreRichText
// (Public, ClassDefaultObject, ArchetypeObject)

class UCFCoreRichText* UCFCoreRichText::GetDefaultObj()
{
	static class UCFCoreRichText* Default = nullptr;

	if (!Default)
		Default = static_cast<UCFCoreRichText*>(UCFCoreRichText::StaticClass()->DefaultObject);

	return Default;
}


// Class cfcore_ui.CFCoreRichTextBlockImageDecorator
// (None)

class UClass* UCFCoreRichTextBlockImageDecorator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CFCoreRichTextBlockImageDecorator");

	return Clss;
}


// CFCoreRichTextBlockImageDecorator cfcore_ui.Default__CFCoreRichTextBlockImageDecorator
// (Public, ClassDefaultObject, ArchetypeObject)

class UCFCoreRichTextBlockImageDecorator* UCFCoreRichTextBlockImageDecorator::GetDefaultObj()
{
	static class UCFCoreRichTextBlockImageDecorator* Default = nullptr;

	if (!Default)
		Default = static_cast<UCFCoreRichTextBlockImageDecorator*>(UCFCoreRichTextBlockImageDecorator::StaticClass()->DefaultObject);

	return Default;
}


// Function cfcore_ui.CFCoreRichTextBlockImageDecorator.SetImageToMap
// (Final, Native, Private)
// Parameters:
// class UTexture2DDynamic*           Image                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
// class FString                      ImageUrl                                                         (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

class FString UCFCoreRichTextBlockImageDecorator::SetImageToMap(class UTexture2DDynamic** Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreRichTextBlockImageDecorator", "SetImageToMap");

	Params::UCFCoreRichTextBlockImageDecorator_SetImageToMap_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Image != nullptr)
		*Image = Parms.Image;

	return Parms.ReturnValue;

}


// Class cfcore_ui.CFCoreThemeSettings
// (None)

class UClass* UCFCoreThemeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CFCoreThemeSettings");

	return Clss;
}


// CFCoreThemeSettings cfcore_ui.Default__CFCoreThemeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UCFCoreThemeSettings* UCFCoreThemeSettings::GetDefaultObj()
{
	static class UCFCoreThemeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UCFCoreThemeSettings*>(UCFCoreThemeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function cfcore_ui.CFCoreThemeSettings.CommitThemeData
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// class UDataTable*                  ThemeDataTable                                                   (ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class FString                      ThemeName                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FCFCoreThemeRowData         Data                                                             (ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FCFCoreThemeRowData UCFCoreThemeSettings::CommitThemeData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreThemeSettings", "CommitThemeData");

	Params::UCFCoreThemeSettings_CommitThemeData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class cfcore_ui.CFCoreUIBaseModel
// (None)

class UClass* ICFCoreUIBaseModel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CFCoreUIBaseModel");

	return Clss;
}


// CFCoreUIBaseModel cfcore_ui.Default__CFCoreUIBaseModel
// (Public, ClassDefaultObject, ArchetypeObject)

class ICFCoreUIBaseModel* ICFCoreUIBaseModel::GetDefaultObj()
{
	static class ICFCoreUIBaseModel* Default = nullptr;

	if (!Default)
		Default = static_cast<ICFCoreUIBaseModel*>(ICFCoreUIBaseModel::StaticClass()->DefaultObject);

	return Default;
}


// Function cfcore_ui.CFCoreUIBaseModel.OnEventReceived_LibraryProgress
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FLibraryProgress            Progress                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> OutModsList                                                      (ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FInstallProgressMod> ICFCoreUIBaseModel::OnEventReceived_LibraryProgress(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUIBaseModel", "OnEventReceived_LibraryProgress");

	Params::ICFCoreUIBaseModel_OnEventReceived_LibraryProgress_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUIBaseModel.OnEventReceived_Installed
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FInstalledMod>       InModsList                                                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FInstallProgressMod> OutModsList                                                      (ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FInstallProgressMod> ICFCoreUIBaseModel::OnEventReceived_Installed(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUIBaseModel", "OnEventReceived_Installed");

	Params::ICFCoreUIBaseModel_OnEventReceived_Installed_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUIBaseModel.OnEventReceived
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FCFCoreMod>          InModsList                                                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FInstallProgressMod> OutModsList                                                      (ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FInstallProgressMod> ICFCoreUIBaseModel::OnEventReceived(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUIBaseModel", "OnEventReceived");

	Params::ICFCoreUIBaseModel_OnEventReceived_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class cfcore_ui.CFCoreUIBaseView
// (None)

class UClass* ICFCoreUIBaseView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CFCoreUIBaseView");

	return Clss;
}


// CFCoreUIBaseView cfcore_ui.Default__CFCoreUIBaseView
// (Public, ClassDefaultObject, ArchetypeObject)

class ICFCoreUIBaseView* ICFCoreUIBaseView::GetDefaultObj()
{
	static class ICFCoreUIBaseView* Default = nullptr;

	if (!Default)
		Default = static_cast<ICFCoreUIBaseView*>(ICFCoreUIBaseView::StaticClass()->DefaultObject);

	return Default;
}


// Function cfcore_ui.CFCoreUIBaseView.OnEventBroadcasted
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FInstallProgressMod> ModsList                                                         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FCFCoreApiResponsePaginationPagination                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FInstallProgressMod> ICFCoreUIBaseView::OnEventBroadcasted(struct FCFCoreApiResponsePagination* Pagination, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUIBaseView", "OnEventBroadcasted");

	Params::ICFCoreUIBaseView_OnEventBroadcasted_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Pagination != nullptr)
		*Pagination = std::move(Parms.Pagination);

	return Parms.ReturnValue;

}


// Class cfcore_ui.CFCoreUIModel
// (None)

class UClass* UCFCoreUIModel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CFCoreUIModel");

	return Clss;
}


// CFCoreUIModel cfcore_ui.Default__CFCoreUIModel
// (Public, ClassDefaultObject, ArchetypeObject)

class UCFCoreUIModel* UCFCoreUIModel::GetDefaultObj()
{
	static class UCFCoreUIModel* Default = nullptr;

	if (!Default)
		Default = static_cast<UCFCoreUIModel*>(UCFCoreUIModel::StaticClass()->DefaultObject);

	return Default;
}


// Class cfcore_ui.CFCoreUISubsystem
// (None)

class UClass* UCFCoreUISubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CFCoreUISubsystem");

	return Clss;
}


// CFCoreUISubsystem cfcore_ui.Default__CFCoreUISubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UCFCoreUISubsystem* UCFCoreUISubsystem::GetDefaultObj()
{
	static class UCFCoreUISubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UCFCoreUISubsystem*>(UCFCoreUISubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function cfcore_ui.CFCoreUISubsystem.UpdateMod
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreMod                  Mod                                                              (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, Transient, GlobalConfig, SubobjectReference)

void UCFCoreUISubsystem::UpdateMod(const struct FCFCoreMod& Mod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "UpdateMod");

	Params::UCFCoreUISubsystem_UpdateMod_Params Parms{};

	Parms.Mod = Mod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.CFCoreUISubsystem.UnsubscribeViewFromEvents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     View                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst)
// TArray<enum class EGameModsEvent>  Evts                                                             (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

TArray<enum class EGameModsEvent> UCFCoreUISubsystem::UnsubscribeViewFromEvents(class UObject* View)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "UnsubscribeViewFromEvents");

	Params::UCFCoreUISubsystem_UnsubscribeViewFromEvents_Params Parms{};

	Parms.View = View;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUISubsystem.UnsubscribeViewFromEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     View                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst)
// enum class EGameModsEvent          Evt                                                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EGameModsEvent UCFCoreUISubsystem::UnsubscribeViewFromEvent(class UObject* View, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "UnsubscribeViewFromEvent");

	Params::UCFCoreUISubsystem_UnsubscribeViewFromEvent_Params Parms{};

	Parms.View = View;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUISubsystem.UnregisterModelClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      ModelClass                                                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UCFCoreUISubsystem::UnregisterModelClass(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "UnregisterModelClass");

	Params::UCFCoreUISubsystem_UnregisterModelClass_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUISubsystem.UninstallMod
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreMod                  Mod                                                              (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, Transient, GlobalConfig, SubobjectReference)

void UCFCoreUISubsystem::UninstallMod(const struct FCFCoreMod& Mod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "UninstallMod");

	Params::UCFCoreUISubsystem_UninstallMod_Params Parms{};

	Parms.Mod = Mod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.CFCoreUISubsystem.SubscribeViewToEvents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     View                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst)
// TArray<enum class EGameModsEvent>  Evts                                                             (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               InitializeView                                                   (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UCFCoreUISubsystem::SubscribeViewToEvents(class UObject* View, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "SubscribeViewToEvents");

	Params::UCFCoreUISubsystem_SubscribeViewToEvents_Params Parms{};

	Parms.View = View;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUISubsystem.SubscribeViewToEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     View                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst)
// enum class EGameModsEvent          Evt                                                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               InitializeView                                                   (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UCFCoreUISubsystem::SubscribeViewToEvent(class UObject* View, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "SubscribeViewToEvent");

	Params::UCFCoreUISubsystem_SubscribeViewToEvent_Params Parms{};

	Parms.View = View;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUISubsystem.SetMod
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreMod                  Mod                                                              (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, Transient, GlobalConfig, SubobjectReference)
// struct FInstalledMod               InInstalledMod                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FInstalledMod               OutInstalledMod                                                  (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

struct FInstalledMod UCFCoreUISubsystem::SetMod(const struct FCFCoreMod& Mod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "SetMod");

	Params::UCFCoreUISubsystem_SetMod_Params Parms{};

	Parms.Mod = Mod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUISubsystem.SearchMods
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreSearchModsFilter     Filter                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config)
// struct FCFCoreApiRequestPagination Pagination                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)

void UCFCoreUISubsystem::SearchMods(struct FCFCoreSearchModsFilter* Filter, struct FCFCoreApiRequestPagination* Pagination)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "SearchMods");

	Params::UCFCoreUISubsystem_SearchMods_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Filter != nullptr)
		*Filter = std::move(Parms.Filter);

	if (Pagination != nullptr)
		*Pagination = std::move(Parms.Pagination);

}


// Function cfcore_ui.CFCoreUISubsystem.ReleaseUIController
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCFCoreUISubsystem::ReleaseUIController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "ReleaseUIController");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.CFCoreUISubsystem.RegisterPurchaseModsDelegate
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 PurchaseModsDelegate                                             (ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreUISubsystem::RegisterPurchaseModsDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "RegisterPurchaseModsDelegate");

	Params::UCFCoreUISubsystem_RegisterPurchaseModsDelegate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUISubsystem.RegisterPurchaseModDelegate
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 PurchaseModDelegate                                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreUISubsystem::RegisterPurchaseModDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "RegisterPurchaseModDelegate");

	Params::UCFCoreUISubsystem_RegisterPurchaseModDelegate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUISubsystem.RegisterModelClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      ModelClass                                                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UCFCoreUISubsystem::RegisterModelClass(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "RegisterModelClass");

	Params::UCFCoreUISubsystem_RegisterModelClass_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUISubsystem.RegisterErrorDelegate
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 ErrorDelegate                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreUISubsystem::RegisterErrorDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "RegisterErrorDelegate");

	Params::UCFCoreUISubsystem_RegisterErrorDelegate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUISubsystem.PurchaseMods
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<int64>                      ModsId                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

TArray<int64> UCFCoreUISubsystem::PurchaseMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "PurchaseMods");

	Params::UCFCoreUISubsystem_PurchaseMods_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUISubsystem.PurchaseMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

void UCFCoreUISubsystem::PurchaseMod(int64 ModId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "PurchaseMod");

	Params::UCFCoreUISubsystem_PurchaseMod_Params Parms{};

	Parms.ModId = ModId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.CFCoreUISubsystem.OnUninstall
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FInstalledMod               InstalledMod                                                     (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient)

void UCFCoreUISubsystem::OnUninstall(const struct FInstalledMod& InstalledMod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "OnUninstall");

	Params::UCFCoreUISubsystem_OnUninstall_Params Parms{};

	Parms.InstalledMod = InstalledMod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.CFCoreUISubsystem.OnSearchModsError
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UCFCoreUISubsystem::OnSearchModsError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "OnSearchModsError");

	Params::UCFCoreUISubsystem_OnSearchModsError_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUISubsystem.OnSearchMods
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<struct FCFCoreMod>          Mods                                                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, GlobalConfig, SubobjectReference)
// struct FCFCoreApiResponsePaginationPagination                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)

void UCFCoreUISubsystem::OnSearchMods(const TArray<struct FCFCoreMod>& Mods, struct FCFCoreApiResponsePagination* Pagination)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "OnSearchMods");

	Params::UCFCoreUISubsystem_OnSearchMods_Params Parms{};

	Parms.Mods = Mods;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Pagination != nullptr)
		*Pagination = std::move(Parms.Pagination);

}


// Function cfcore_ui.CFCoreUISubsystem.OnMyModsError
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UCFCoreUISubsystem::OnMyModsError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "OnMyModsError");

	Params::UCFCoreUISubsystem_OnMyModsError_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUISubsystem.OnMyMods
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<struct FCFCoreMod>          Mods                                                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, GlobalConfig, SubobjectReference)

void UCFCoreUISubsystem::OnMyMods(const TArray<struct FCFCoreMod>& Mods)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "OnMyMods");

	Params::UCFCoreUISubsystem_OnMyMods_Params Parms{};

	Parms.Mods = Mods;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.CFCoreUISubsystem.OnModUninstallError
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UCFCoreUISubsystem::OnModUninstallError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "OnModUninstallError");

	Params::UCFCoreUISubsystem_OnModUninstallError_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUISubsystem.OnModInstallError
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)
// struct FCFCoreMod                  InstallingMod                                                    (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

struct FCFCoreMod UCFCoreUISubsystem::OnModInstallError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "OnModInstallError");

	Params::UCFCoreUISubsystem_OnModInstallError_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUISubsystem.OnInstallProgress
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FLibraryProgress            Progress                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)

struct FLibraryProgress UCFCoreUISubsystem::OnInstallProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "OnInstallProgress");

	Params::UCFCoreUISubsystem_OnInstallProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUISubsystem.OnGetModsByIds
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<struct FCFCoreMod>          Mods                                                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, GlobalConfig, SubobjectReference)

void UCFCoreUISubsystem::OnGetModsByIds(const TArray<struct FCFCoreMod>& Mods)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "OnGetModsByIds");

	Params::UCFCoreUISubsystem_OnGetModsByIds_Params Parms{};

	Parms.Mods = Mods;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.CFCoreUISubsystem.OnGetInstalledModsError
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UCFCoreUISubsystem::OnGetInstalledModsError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "OnGetInstalledModsError");

	Params::UCFCoreUISubsystem_OnGetInstalledModsError_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUISubsystem.OnGetInstalledMods
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<struct FInstalledMod>       InstalledMods                                                    (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FInstalledMod> UCFCoreUISubsystem::OnGetInstalledMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "OnGetInstalledMods");

	Params::UCFCoreUISubsystem_OnGetInstalledMods_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUISubsystem.OnFinishedUpdating
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FInstalledMod               UpdatedMod                                                       (Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

struct FInstalledMod UCFCoreUISubsystem::OnFinishedUpdating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "OnFinishedUpdating");

	Params::UCFCoreUISubsystem_OnFinishedUpdating_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUISubsystem.OnFinishedInstalling
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FInstalledMod               InstalledMod                                                     (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient)

void UCFCoreUISubsystem::OnFinishedInstalling(const struct FInstalledMod& InstalledMod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "OnFinishedInstalling");

	Params::UCFCoreUISubsystem_OnFinishedInstalling_Params Parms{};

	Parms.InstalledMod = InstalledMod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.CFCoreUISubsystem.OnCancelModInstallationSuccess
// (Final, Native, Private)
// Parameters:

void UCFCoreUISubsystem::OnCancelModInstallationSuccess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "OnCancelModInstallationSuccess");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.CFCoreUISubsystem.OnCancelModInstallation
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UCFCoreUISubsystem::OnCancelModInstallation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "OnCancelModInstallation");

	Params::UCFCoreUISubsystem_OnCancelModInstallation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUISubsystem.MakeFInstallProgressModFromID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64                              ID                                                               (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FInstallProgressMod         ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCFCoreUISubsystem::MakeFInstallProgressModFromID(int64* ID, const struct FInstallProgressMod& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "MakeFInstallProgressModFromID");

	Params::UCFCoreUISubsystem_MakeFInstallProgressModFromID_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ID != nullptr)
		*ID = Parms.ID;

}


// Function cfcore_ui.CFCoreUISubsystem.MakeFInstallProgressMod
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreMod                  Mod                                                              (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, Transient, GlobalConfig, SubobjectReference)
// struct FInstallProgressMod         ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCFCoreUISubsystem::MakeFInstallProgressMod(const struct FCFCoreMod& Mod, const struct FInstallProgressMod& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "MakeFInstallProgressMod");

	Params::UCFCoreUISubsystem_MakeFInstallProgressMod_Params Parms{};

	Parms.Mod = Mod;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.CFCoreUISubsystem.IsAnyModInstalling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCFCoreUISubsystem::IsAnyModInstalling(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "IsAnyModInstalling");

	Params::UCFCoreUISubsystem_IsAnyModInstalling_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.CFCoreUISubsystem.InstallMod
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreMod                  Mod                                                              (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, Transient, GlobalConfig, SubobjectReference)

void UCFCoreUISubsystem::InstallMod(const struct FCFCoreMod& Mod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "InstallMod");

	Params::UCFCoreUISubsystem_InstallMod_Params Parms{};

	Parms.Mod = Mod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.CFCoreUISubsystem.InitializeUIController
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCFCoreUISubsystem::InitializeUIController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "InitializeUIController");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.CFCoreUISubsystem.InitializeModView
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     View                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst)
// struct FCFCoreMod                  Mod                                                              (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, Transient, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCFCoreUISubsystem::InitializeModView(class UObject* View, const struct FCFCoreMod& Mod, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "InitializeModView");

	Params::UCFCoreUISubsystem_InitializeModView_Params Parms{};

	Parms.View = View;
	Parms.Mod = Mod;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.CFCoreUISubsystem.GetMyMods
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCFCoreUISubsystem::GetMyMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "GetMyMods");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.CFCoreUISubsystem.GetModById
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInstallProgressMod         OutMod                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// int64                              ID                                                               (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FInstallProgressMod UCFCoreUISubsystem::GetModById(int64* ID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "GetModById");

	Params::UCFCoreUISubsystem_GetModById_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ID != nullptr)
		*ID = Parms.ID;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreUISubsystem.GetInstalledMods
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCFCoreUISubsystem::GetInstalledMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "GetInstalledMods");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.CFCoreUISubsystem.CancelModInstallation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreMod                  Mod                                                              (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, Transient, GlobalConfig, SubobjectReference)

void UCFCoreUISubsystem::CancelModInstallation(const struct FCFCoreMod& Mod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "CancelModInstallation");

	Params::UCFCoreUISubsystem_CancelModInstallation_Params Parms{};

	Parms.Mod = Mod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.CFCoreUISubsystem.ApiGetModsById
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int64>                      ModIds                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

void UCFCoreUISubsystem::ApiGetModsById(TArray<int64>* ModIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreUISubsystem", "ApiGetModsById");

	Params::UCFCoreUISubsystem_ApiGetModsById_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ModIds != nullptr)
		*ModIds = std::move(Parms.ModIds);

}


// Class cfcore_ui.CFCoreVirtualCursorFunctionLibrary
// (None)

class UClass* UCFCoreVirtualCursorFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CFCoreVirtualCursorFunctionLibrary");

	return Clss;
}


// CFCoreVirtualCursorFunctionLibrary cfcore_ui.Default__CFCoreVirtualCursorFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UCFCoreVirtualCursorFunctionLibrary* UCFCoreVirtualCursorFunctionLibrary::GetDefaultObj()
{
	static class UCFCoreVirtualCursorFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UCFCoreVirtualCursorFunctionLibrary*>(UCFCoreVirtualCursorFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function cfcore_ui.CFCoreVirtualCursorFunctionLibrary.IsCursorOverInteractableWidget
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UCFCoreVirtualCursorFunctionLibrary::IsCursorOverInteractableWidget(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreVirtualCursorFunctionLibrary", "IsCursorOverInteractableWidget");

	Params::UCFCoreVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore_ui.CFCoreVirtualCursorFunctionLibrary.EnableVirtualCursor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PC                                                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

class APlayerController* UCFCoreVirtualCursorFunctionLibrary::EnableVirtualCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreVirtualCursorFunctionLibrary", "EnableVirtualCursor");

	Params::UCFCoreVirtualCursorFunctionLibrary_EnableVirtualCursor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore_ui.CFCoreVirtualCursorFunctionLibrary.DisableVirtualCursor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PC                                                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

class APlayerController* UCFCoreVirtualCursorFunctionLibrary::DisableVirtualCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreVirtualCursorFunctionLibrary", "DisableVirtualCursor");

	Params::UCFCoreVirtualCursorFunctionLibrary_DisableVirtualCursor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


