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
// int64                              Class_id                                                         (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class FString                      Summary                                                          (BlueprintVisible, BlueprintReadOnly, Parm, Transient, GlobalConfig, SubobjectReference)
// enum class ECFCoreMakrupType       Description_type                                                 (ConstParm, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Description                                                      (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, DuplicateTransient)
// int64                              Primary_category_id                                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<int64>                      Game_category_ids                                                (Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               Is_experimental                                                  (BlueprintVisible, ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FUpdateModRequest           ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UCFCoreBPLibrary::MakeUpdateModRequest(class FString* Name, const class FString& Summary, const class FString& Description, const struct FUpdateModRequest& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeUpdateModRequest");

	Params::UCFCoreBPLibrary_MakeUpdateModRequest_Params Parms{};

	Parms.Summary = Summary;
	Parms.Description = Description;
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
// struct FCFCoreSettings             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class FString                      Default_language                                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int64                              Game_id                                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Api_key                                                          (BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Mods_directory                                                   (ExportObject, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      User_data_directory                                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Max_concurrent_installations                                     (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FCFCoreSettings             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// int32                              Class_id                                                         (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Category_id                                                      (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Game_version                                                     (Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Search_filter                                                    (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ECFCoreModsSearchSortFieldSort_field                                                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ECFCoreSortOrder        Sort_order                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ECFCoreModLoaderType    Mod_loader_type                                                  (Edit, ConstParm, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Game_version_type_id                                             (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FCFCoreSearchModsFilter     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// int32                              Class_id                                                         (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FCFCoreGetCategoriesFilter  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FDateTime                   EulaAcceptTime                                                   (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FExternalAuthAdditionalInfo ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// int64                              Class_id                                                         (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class FString                      Summary                                                          (BlueprintVisible, BlueprintReadOnly, Parm, Transient, GlobalConfig, SubobjectReference)
// enum class ECFCoreMakrupType       Description_type                                                 (ConstParm, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Description                                                      (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, DuplicateTransient)
// int64                              Primary_category_id                                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<int64>                      Game_category_ids                                                (Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               Is_experimental                                                  (BlueprintVisible, ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FCreateModRequest           ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UCFCoreBPLibrary::MakeCreateModRequest(class FString* Name, const class FString& Summary, const class FString& Description, const struct FCreateModRequest& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeCreateModRequest");

	Params::UCFCoreBPLibrary_MakeCreateModRequest_Params Parms{};

	Parms.Summary = Summary;
	Parms.Description = Description;
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
// enum class ECFCoreChangelogMarkupTypeChangelog_type                                                   (BlueprintVisible, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Changelog                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      Filename                                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
// class FString                      DisplayName                                                      (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient)
// TArray<int64>                      GameVersionIds                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class ECFCoreFileReleaseType  ReleaseType                                                      (Edit, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FModFileCookingOptions      CookingOptions                                                   (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FCreateModFileRequest       ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FModFileCookingOptions UCFCoreBPLibrary::MakeCreateModFileRequest(const struct FCreateModFileRequest& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeCreateModFileRequest");

	Params::UCFCoreBPLibrary_MakeCreateModFileRequest_Params Parms{};

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
// TArray<int64>                      ModIds                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// TArray<int64>                      DevModIds                                                        (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FAssureServerModsUpdatedParamsReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<int64> UCFCoreBPLibrary::MakeAssureServerModsUpdatedParams(TArray<int64>* ModIds, const struct FAssureServerModsUpdatedParams& ReturnValue)
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

	if (ModIds != nullptr)
		*ModIds = std::move(Parms.ModIds);

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreBPLibrary.MakeApiRequestPagination
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// int32                              Page_size                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FCFCoreApiRequestPagination ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UCFCoreBPLibrary::MakeApiRequestPagination(const struct FCFCoreApiRequestPagination& ReturnValue)
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

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreBPLibrary.FormatFileSize
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Bytes                                                            (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int64 UCFCoreBPLibrary::FormatFileSize(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "FormatFileSize");

	Params::UCFCoreBPLibrary_FormatFileSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreBPLibrary.BreakFileSize
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Bytes                                                            (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FCFCoreFileSize             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int64 UCFCoreBPLibrary::BreakFileSize(const struct FCFCoreFileSize& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "BreakFileSize");

	Params::UCFCoreBPLibrary_BreakFileSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// int64                              Mod_id                                                           (ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FUpdateModRequest           Update_mod_request                                               (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Avatar_image_filename                                            (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// FDelegateProperty_                 OnUninitialized                                                  (Edit, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int64                              Mod_id                                                           (ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_uninstalled                                                   (Edit, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// FDelegateProperty_                 On_success                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// class FString                      Email                                                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::SendSecurityCode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "SendSecurityCode");

	Params::UCFCoreSubsystem_SendSecurityCode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.Logout
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_success                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// FDelegateProperty_                 On_is_auth                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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


// Function cfcore.CFCoreSubsystem.InstallMod
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreMod                  Mod                                                              (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, Transient, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 On_progress                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_installed                                                     (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::InstallMod(const struct FCFCoreMod& Mod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "InstallMod");

	Params::UCFCoreSubsystem_InstallMod_Params Parms{};

	Parms.Mod = Mod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.Initialize
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreSettings             Settings                                                         (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// FDelegateProperty_                 OnInitialized                                                    (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst)
// FDelegateProperty_                 OnError                                                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "Initialize");

	Params::UCFCoreSubsystem_Initialize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.GetModsDirInfo
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnModsDirInfo                                                    (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// FDelegateProperty_                 On_installed_mods                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// FDelegateProperty_                 On_success                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// enum class ECFCoreExternalAuthProviderProvider                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      External_token                                                   (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FExternalAuthAdditionalInfo Additional_info                                                  (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// class FString                      Email                                                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// int32                              Security_code                                                    (ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::GenerateAuthToken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "GenerateAuthToken");

	Params::UCFCoreSubsystem_GenerateAuthToken_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.CreateModFile
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FCreateModFileRequest       CreateModFileRequest                                             (Edit, BlueprintVisible, ExportObject, Parm, OutParm, Transient)
// class FString                      LocalFilenameToUpload                                            (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnCreateModFileRequestId                                         (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnProgress                                                       (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnSuccess                                                        (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::CreateModFile(int64 ModId, struct FCreateModFileRequest* CreateModFileRequest, FDelegateProperty_ OnSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "CreateModFile");

	Params::UCFCoreSubsystem_CreateModFile_Params Parms{};

	Parms.ModId = ModId;
	Parms.OnSuccess = OnSuccess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CreateModFileRequest != nullptr)
		*CreateModFileRequest = std::move(Parms.CreateModFileRequest);

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.CreateMod
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCreateModRequest           Create_mod_request                                               (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Avatar_image_filename                                            (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int64                              ModId                                                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// int64                              SourceFileId                                                     (Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FCreateCookedModFileRequest CreateCookedModFileRequest                                       (BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient)
// class FString                      LocalFilenameToUpload                                            (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnCreateModFileRequestId                                         (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnProgress                                                       (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnSuccess                                                        (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::CreateCookedModFile(int64 ModId, struct FCreateCookedModFileRequest* CreateCookedModFileRequest, FDelegateProperty_ OnSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "CreateCookedModFile");

	Params::UCFCoreSubsystem_CreateCookedModFile_Params Parms{};

	Parms.ModId = ModId;
	Parms.OnSuccess = OnSuccess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CreateCookedModFileRequest != nullptr)
		*CreateCookedModFileRequest = std::move(Parms.CreateCookedModFileRequest);

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.CancelInstallation
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int64                              Mod_id                                                           (ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FAssureServerModsUpdatedParamsParams                                                           (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// FDelegateProperty_                 OnProgress                                                       (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnUpdated                                                        (BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// TArray<int64>                      ServerFileIds                                                    (Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnProgress                                                       (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnUpdated                                                        (BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int64                              ModId                                                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// enum class ECFCoreRatingVoteDirectionDirection                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiUpdateRating(int64 ModId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiUpdateRating");

	Params::UCFCoreSubsystem_ApiUpdateRating_Params Parms{};

	Parms.ModId = ModId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiUnblockMods
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUnblockModsRequest         Request                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnResult                                                         (ConstParm, ExportObject, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FCFCoreSearchModsFilter     Filter                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config)
// struct FCFCoreApiRequestPagination Pagination                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 On_results                                                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiSearchMods(struct FCFCoreSearchModsFilter* Filter, struct FCFCoreApiRequestPagination* Pagination)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiSearchMods");

	Params::UCFCoreSubsystem_ApiSearchMods_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Filter != nullptr)
		*Filter = std::move(Parms.Filter);

	if (Pagination != nullptr)
		*Pagination = std::move(Parms.Pagination);

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiReportMod
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// int64                              ReasonId                                                         (Edit, BlueprintVisible, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Report                                                           (Edit, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_reasons                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiReportMod(int64 ModId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiReportMod");

	Params::UCFCoreSubsystem_ApiReportMod_Params Parms{};

	Parms.ModId = ModId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiRemoveRating
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiRemoveRating(int64 ModId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiRemoveRating");

	Params::UCFCoreSubsystem_ApiRemoveRating_Params Parms{};

	Parms.ModId = ModId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetVersionTypes
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_results                                                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// FDelegateProperty_                 On_results                                                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// FDelegateProperty_                 On_results                                                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// FDelegateProperty_                 On_results                                                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// FDelegateProperty_                 On_results                                                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// TArray<int64>                      ModIds                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 On_results                                                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiGetMods(TArray<int64>* ModIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetMods");

	Params::UCFCoreSubsystem_ApiGetMods_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ModIds != nullptr)
		*ModIds = std::move(Parms.ModIds);

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetModDescription
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 On_mod_desc                                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiGetModDescription(int64 ModId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetModDescription");

	Params::UCFCoreSubsystem_ApiGetModDescription_Params Parms{};

	Parms.ModId = ModId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetMod
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 On_mod                                                           (ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiGetMod(int64 ModId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetMod");

	Params::UCFCoreSubsystem_ApiGetMod_Params Parms{};

	Parms.ModId = ModId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetMe
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_results                                                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// FDelegateProperty_                 On_game                                                          (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// TArray<int64>                      FileIds                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 OnResults                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FCFCoreGetCategoriesFilter  Filter                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config)
// FDelegateProperty_                 On_results                                                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::ApiGetCategories(struct FCFCoreGetCategoriesFilter* Filter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetCategories");

	Params::UCFCoreSubsystem_ApiGetCategories_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Filter != nullptr)
		*Filter = std::move(Parms.Filter);

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetBlockedModsDetails
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_result                                                        (ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// FDelegateProperty_                 OnVersion                                                        (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// FDelegateProperty_                 On_result                                                        (ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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

}


