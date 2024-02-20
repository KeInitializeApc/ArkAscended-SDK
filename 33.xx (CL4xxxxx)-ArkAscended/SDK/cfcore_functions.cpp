#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class cfcore.CFCoreBPLibrary
// (None)

class UClass* UCFCoreBPLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CFCoreBPLibrary");

	return Clss;
}


// CFCoreBPLibrary cfcore.Default__CFCoreBPLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UCFCoreBPLibrary* UCFCoreBPLibrary::GetDefaultObj()
{
	static class UCFCoreBPLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UCFCoreBPLibrary*>(UCFCoreBPLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function cfcore.CFCoreBPLibrary.MakeUpdateModRequest
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Class_id                                                         (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class FString                      Summary                                                          (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// enum class ECFCoreMakrupType       Description_type                                                 (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class FString                      Description                                                      (Edit, ConstParm, ExportObject, Net, ReturnParm, Transient, Config, EditConst, InstancedReference, DuplicateTransient)
// int64                              Primary_category_id                                              (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// TArray<int64>                      Game_category_ids                                                (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               Is_experimental                                                  (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FUpdateModRequest           ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UCFCoreBPLibrary::MakeUpdateModRequest(class FString* Name, const struct FUpdateModRequest& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeUpdateModRequest");

	Params::UCFCoreBPLibrary_MakeUpdateModRequest_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreBPLibrary.MakeSettingsFromProjectConfig
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FCFCoreSettings             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCFCoreBPLibrary::MakeSettingsFromProjectConfig(const struct FCFCoreSettings& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeSettingsFromProjectConfig");

	Params::UCFCoreBPLibrary_MakeSettingsFromProjectConfig_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreBPLibrary.MakeSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Default_language                                                 (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// int64                              Game_id                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class FString                      Api_key                                                          (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class FString                      Mods_directory                                                   (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class FString                      User_data_directory                                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              Max_concurrent_installations                                     (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FCFCoreSettings             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UCFCoreBPLibrary::MakeSettings(const struct FCFCoreSettings& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeSettings");

	Params::UCFCoreBPLibrary_MakeSettings_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreBPLibrary.MakeSearchModsFilter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Class_id                                                         (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              Category_id                                                      (Edit, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class FString                      Game_version                                                     (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class FString                      Search_filter                                                    (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// enum class ECFCoreModsSearchSortFieldSort_field                                                       (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// enum class ECFCoreSortOrder        Sort_order                                                       (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// enum class ECFCoreModLoaderType    Mod_loader_type                                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              Game_version_type_id                                             (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FCFCoreSearchModsFilter     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UCFCoreBPLibrary::MakeSearchModsFilter(const struct FCFCoreSearchModsFilter& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeSearchModsFilter");

	Params::UCFCoreBPLibrary_MakeSearchModsFilter_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreBPLibrary.MakeGetCategoriesFilter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Class_id                                                         (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FCFCoreGetCategoriesFilter  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UCFCoreBPLibrary::MakeGetCategoriesFilter(const struct FCFCoreGetCategoriesFilter& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeGetCategoriesFilter");

	Params::UCFCoreBPLibrary_MakeGetCategoriesFilter_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreBPLibrary.MakeExternalAuthAdditionalInfo
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime                   EulaAcceptTime                                                   (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FExternalAuthAdditionalInfo ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FDateTime UCFCoreBPLibrary::MakeExternalAuthAdditionalInfo(const struct FExternalAuthAdditionalInfo& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeExternalAuthAdditionalInfo");

	Params::UCFCoreBPLibrary_MakeExternalAuthAdditionalInfo_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreBPLibrary.MakeCreateModRequest
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Class_id                                                         (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class FString                      Summary                                                          (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// enum class ECFCoreMakrupType       Description_type                                                 (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class FString                      Description                                                      (Edit, ConstParm, ExportObject, Net, ReturnParm, Transient, Config, EditConst, InstancedReference, DuplicateTransient)
// int64                              Primary_category_id                                              (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// TArray<int64>                      Game_category_ids                                                (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               Is_experimental                                                  (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FCreateModRequest           ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UCFCoreBPLibrary::MakeCreateModRequest(class FString* Name, const struct FCreateModRequest& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeCreateModRequest");

	Params::UCFCoreBPLibrary_MakeCreateModRequest_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreBPLibrary.MakeCreateModFileRequest
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ECFCoreChangelogMarkupTypeChangelog_type                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class FString                      Changelog                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      Filename                                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
// class FString                      DisplayName                                                      (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient)
// TArray<int64>                      GameVersionIds                                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class ECFCoreFileReleaseType  ReleaseType                                                      (ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FModFileCookingOptions      CookingOptions                                                   (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCreateModFileRequest       ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FModFileCookingOptions UCFCoreBPLibrary::MakeCreateModFileRequest(enum class ECFCoreFileReleaseType ReleaseType, const struct FCreateModFileRequest& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeCreateModFileRequest");

	Params::UCFCoreBPLibrary_MakeCreateModFileRequest_Params Parms{};

	Parms.ReleaseType = ReleaseType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreBPLibrary.MakeAssureServerModsUpdatedParams
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int64>                      ModIds                                                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// TArray<int64>                      DevModIds                                                        (Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FAssureServerModsUpdatedParamsReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<int64> UCFCoreBPLibrary::MakeAssureServerModsUpdatedParams(const struct FAssureServerModsUpdatedParams& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeAssureServerModsUpdatedParams");

	Params::UCFCoreBPLibrary_MakeAssureServerModsUpdatedParams_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreBPLibrary.MakeApiRequestPagination
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// int32                              Page_size                                                        (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FCFCoreApiRequestPagination ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UCFCoreBPLibrary::MakeApiRequestPagination(int32* Index, const struct FCFCoreApiRequestPagination& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeApiRequestPagination");

	Params::UCFCoreBPLibrary_MakeApiRequestPagination_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Index != nullptr)
		*Index = Parms.Index;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreBPLibrary.FormatFileSize
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Bytes                                                            (Edit, ConstParm, Net, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCFCoreBPLibrary::FormatFileSize(int64 Bytes, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "FormatFileSize");

	Params::UCFCoreBPLibrary_FormatFileSize_Params Parms{};

	Parms.Bytes = Bytes;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreBPLibrary.BreakFileSize
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Bytes                                                            (Edit, ConstParm, Net, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// struct FCFCoreFileSize             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCFCoreBPLibrary::BreakFileSize(int64 Bytes, const struct FCFCoreFileSize& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "BreakFileSize");

	Params::UCFCoreBPLibrary_BreakFileSize_Params Parms{};

	Parms.Bytes = Bytes;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class cfcore.CFCoreEditorSettings
// (None)

class UClass* UCFCoreEditorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CFCoreEditorSettings");

	return Clss;
}


// CFCoreEditorSettings cfcore.Default__CFCoreEditorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UCFCoreEditorSettings* UCFCoreEditorSettings::GetDefaultObj()
{
	static class UCFCoreEditorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UCFCoreEditorSettings*>(UCFCoreEditorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class cfcore.CFCoreSubsystem
// (None)

class UClass* UCFCoreSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CFCoreSubsystem");

	return Clss;
}


// CFCoreSubsystem cfcore.Default__CFCoreSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UCFCoreSubsystem* UCFCoreSubsystem::GetDefaultObj()
{
	static class UCFCoreSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UCFCoreSubsystem*>(UCFCoreSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function cfcore.CFCoreSubsystem.UpdateMod
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              Mod_id                                                           (ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FUpdateModRequest           Update_mod_request                                               (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class FString                      Avatar_image_filename                                            (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::UpdateMod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "UpdateMod");

	Params::UCFCoreSubsystem_UpdateMod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.Unitialize
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnUninitialized                                                  (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::Unitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "Unitialize");

	Params::UCFCoreSubsystem_Unitialize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.UninstallMod
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int64                              Mod_id                                                           (ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_uninstalled                                                   (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::UninstallMod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "UninstallMod");

	Params::UCFCoreSubsystem_UninstallMod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.SynchronizeWithServer
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_success                                                       (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::SynchronizeWithServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "SynchronizeWithServer");

	Params::UCFCoreSubsystem_SynchronizeWithServer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.SendSecurityCode
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Email                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::SendSecurityCode(const class FString& Email)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "SendSecurityCode");

	Params::UCFCoreSubsystem_SendSecurityCode_Params Parms{};

	Parms.Email = Email;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.PremiumModsCheck
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int64>                      InModIds                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnSuccess                                                        (EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::PremiumModsCheck(FDelegateProperty_* OnSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "PremiumModsCheck");

	Params::UCFCoreSubsystem_PremiumModsCheck_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OnSuccess != nullptr)
		*OnSuccess = Parms.OnSuccess;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.OverridePublicKey
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InPublicKeyPem                                                   (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnSuccess                                                        (EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::OverridePublicKey(FDelegateProperty_* OnSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "OverridePublicKey");

	Params::UCFCoreSubsystem_OverridePublicKey_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OnSuccess != nullptr)
		*OnSuccess = Parms.OnSuccess;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.Logout
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_success                                                       (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::Logout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "Logout");

	Params::UCFCoreSubsystem_Logout_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.IsAuthenticated
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_is_auth                                                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::IsAuthenticated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "IsAuthenticated");

	Params::UCFCoreSubsystem_IsAuthenticated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.InstallModExtended
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreMod                  InMod                                                            (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FFile                       InFile                                                           (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FInstallModAdditionalParams InAdditionalParams                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnProgress                                                       (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnInstalled                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::InstallModExtended()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "InstallModExtended");

	Params::UCFCoreSubsystem_InstallModExtended_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.InstallMod
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreMod                  Mod                                                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 On_progress                                                      (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_installed                                                     (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::InstallMod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "InstallMod");

	Params::UCFCoreSubsystem_InstallMod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.Initialize
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreSettings             Settings                                                         (Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 OnInitialized                                                    (BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst)
// FDelegateProperty_                 OnError                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::Initialize(const struct FCFCoreSettings& Settings, FDelegateProperty_ OnInitialized)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "Initialize");

	Params::UCFCoreSubsystem_Initialize_Params Parms{};

	Parms.Settings = Settings;
	Parms.OnInitialized = OnInitialized;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.GetMyPremiumMods
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnSuccess                                                        (EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::GetMyPremiumMods(FDelegateProperty_* OnSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "GetMyPremiumMods");

	Params::UCFCoreSubsystem_GetMyPremiumMods_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OnSuccess != nullptr)
		*OnSuccess = Parms.OnSuccess;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.GetModsDirInfo
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnModsDirInfo                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::GetModsDirInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "GetModsDirInfo");

	Params::UCFCoreSubsystem_GetModsDirInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.GetInstalledMods
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_installed_mods                                                (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::GetInstalledMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "GetInstalledMods");

	Params::UCFCoreSubsystem_GetInstalledMods_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.GetAuthTerms
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_success                                                       (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::GetAuthTerms()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "GetAuthTerms");

	Params::UCFCoreSubsystem_GetAuthTerms_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.GenerateAuthTokenByExternalProvider
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ECFCoreExternalAuthProviderProvider                                                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      External_token                                                   (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FExternalAuthAdditionalInfo Additional_info                                                  (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::GenerateAuthTokenByExternalProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "GenerateAuthTokenByExternalProvider");

	Params::UCFCoreSubsystem_GenerateAuthTokenByExternalProvider_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.GenerateAuthToken
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Email                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Security_code                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::GenerateAuthToken(const class FString& Email)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "GenerateAuthToken");

	Params::UCFCoreSubsystem_GenerateAuthToken_Params Parms{};

	Parms.Email = Email;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.CreateModFile
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FCreateModFileRequest       CreateModFileRequest                                             (ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient)
// class FString                      LocalFilenameToUpload                                            (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnCreateModFileRequestId                                         (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnProgress                                                       (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnSuccess                                                        (EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::CreateModFile(struct FCreateModFileRequest* CreateModFileRequest, FDelegateProperty_* OnSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "CreateModFile");

	Params::UCFCoreSubsystem_CreateModFile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CreateModFileRequest != nullptr)
		*CreateModFileRequest = std::move(Parms.CreateModFileRequest);

	if (OnSuccess != nullptr)
		*OnSuccess = Parms.OnSuccess;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.CreateMod
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCreateModRequest           Create_mod_request                                               (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class FString                      Avatar_image_filename                                            (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::CreateMod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "CreateMod");

	Params::UCFCoreSubsystem_CreateMod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.CreateCookedModFile
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// int64                              SourceFileId                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FCreateCookedModFileRequest CreateCookedModFileRequest                                       (Edit, ExportObject, Parm, OutParm, Transient)
// class FString                      LocalFilenameToUpload                                            (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnCreateModFileRequestId                                         (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnProgress                                                       (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnSuccess                                                        (EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::CreateCookedModFile(struct FCreateCookedModFileRequest* CreateCookedModFileRequest, FDelegateProperty_* OnSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "CreateCookedModFile");

	Params::UCFCoreSubsystem_CreateCookedModFile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CreateCookedModFileRequest != nullptr)
		*CreateCookedModFileRequest = std::move(Parms.CreateCookedModFileRequest);

	if (OnSuccess != nullptr)
		*OnSuccess = Parms.OnSuccess;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.CancelInstallation
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int64                              Mod_id                                                           (ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::CancelInstallation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "CancelInstallation");

	Params::UCFCoreSubsystem_CancelInstallation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.AssureServerModsUpdated
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAssureServerModsUpdatedParamsParams                                                           (Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 OnProgress                                                       (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnUpdated                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::AssureServerModsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "AssureServerModsUpdated");

	Params::UCFCoreSubsystem_AssureServerModsUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.AssureClientModsUpdated
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int64>                      ServerFileIds                                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnProgress                                                       (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnUpdated                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::AssureClientModsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "AssureClientModsUpdated");

	Params::UCFCoreSubsystem_AssureClientModsUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiUpdateRating
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// enum class ECFCoreRatingVoteDirectionDirection                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiUpdateRating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiUpdateRating");

	Params::UCFCoreSubsystem_ApiUpdateRating_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiUnblockMods
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUnblockModsRequest         Request                                                          (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnResult                                                         (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiUnblockMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiUnblockMods");

	Params::UCFCoreSubsystem_ApiUnblockMods_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiSearchMods
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreSearchModsFilter     Filter                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
// struct FCFCoreApiRequestPagination Pagination                                                       (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 On_results                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiSearchMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiSearchMods");

	Params::UCFCoreSubsystem_ApiSearchMods_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiReportMod
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// int64                              ReasonId                                                         (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class FString                      Report                                                           (Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_reasons                                                       (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiReportMod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiReportMod");

	Params::UCFCoreSubsystem_ApiReportMod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiRemoveRating
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiRemoveRating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiRemoveRating");

	Params::UCFCoreSubsystem_ApiRemoveRating_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiMatchPlatformFiles
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMatchPlatformFilesFilter   Filter                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
// FDelegateProperty_                 OnResults                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiMatchPlatformFiles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiMatchPlatformFiles");

	Params::UCFCoreSubsystem_ApiMatchPlatformFiles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetVersionTypes
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_results                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiGetVersionTypes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetVersionTypes");

	Params::UCFCoreSubsystem_ApiGetVersionTypes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetVersions
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_results                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiGetVersions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetVersions");

	Params::UCFCoreSubsystem_ApiGetVersions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetReportingReasons
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_results                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiGetReportingReasons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetReportingReasons");

	Params::UCFCoreSubsystem_ApiGetReportingReasons_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetMyRatings
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_results                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiGetMyRatings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetMyRatings");

	Params::UCFCoreSubsystem_ApiGetMyRatings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetMyMods
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_results                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiGetMyMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetMyMods");

	Params::UCFCoreSubsystem_ApiGetMyMods_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetMods
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int64>                      ModIds                                                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 On_results                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiGetMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetMods");

	Params::UCFCoreSubsystem_ApiGetMods_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetModDescription
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 On_mod_desc                                                      (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiGetModDescription()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetModDescription");

	Params::UCFCoreSubsystem_ApiGetModDescription_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetMod
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 On_mod                                                           (Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiGetMod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetMod");

	Params::UCFCoreSubsystem_ApiGetMod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetMe
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_results                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiGetMe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetMe");

	Params::UCFCoreSubsystem_ApiGetMe_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetGame
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_game                                                          (BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiGetGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetGame");

	Params::UCFCoreSubsystem_ApiGetGame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetFiles
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int64>                      FileIds                                                          (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 OnResults                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiGetFiles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetFiles");

	Params::UCFCoreSubsystem_ApiGetFiles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetCategories
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreGetCategoriesFilter  Filter                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
// FDelegateProperty_                 On_results                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiGetCategories()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetCategories");

	Params::UCFCoreSubsystem_ApiGetCategories_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetBlockedModsDetails
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_result                                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiGetBlockedModsDetails()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetBlockedModsDetails");

	Params::UCFCoreSubsystem_ApiGetBlockedModsDetails_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetActiveCookingVersion
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnVersion                                                        (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiGetActiveCookingVersion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetActiveCookingVersion");

	Params::UCFCoreSubsystem_ApiGetActiveCookingVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGenerateTempToken
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_result                                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiGenerateTempToken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGenerateTempToken");

	Params::UCFCoreSubsystem_ApiGenerateTempToken_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGeneratePremiumCheckoutUrl
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGenPremiumCheckoutUrlRequestRequest                                                          (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnSuccess                                                        (EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiGeneratePremiumCheckoutUrl(FDelegateProperty_* OnSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGeneratePremiumCheckoutUrl");

	Params::UCFCoreSubsystem_ApiGeneratePremiumCheckoutUrl_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OnSuccess != nullptr)
		*OnSuccess = Parms.OnSuccess;

	return Parms.ReturnValue;

}

}


