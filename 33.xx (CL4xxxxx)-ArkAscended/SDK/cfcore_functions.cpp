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
// int64                              Class_id                                                         (BlueprintVisible, ExportObject, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class FString                      Summary                                                          (ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// enum class ECFCoreMakrupType       Description_type                                                 (Edit, ConstParm, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Description                                                      (ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// int64                              Primary_category_id                                              (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<int64>                      Game_category_ids                                                (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               Is_experimental                                                  (Edit, BlueprintVisible, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FUpdateModRequest           ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FUpdateModRequest UCFCoreBPLibrary::MakeUpdateModRequest(int64 Class_id, class FString* Name, enum class ECFCoreMakrupType Description_type, int64 Primary_category_id, const TArray<int64>& Game_category_ids, bool Is_experimental)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeUpdateModRequest");

	Params::UCFCoreBPLibrary_MakeUpdateModRequest_Params Parms{};

	Parms.Class_id = Class_id;
	Parms.Description_type = Description_type;
	Parms.Primary_category_id = Primary_category_id;
	Parms.Game_category_ids = Game_category_ids;
	Parms.Is_experimental = Is_experimental;

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
// struct FCFCoreSettings             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FCFCoreSettings UCFCoreBPLibrary::MakeSettingsFromProjectConfig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeSettingsFromProjectConfig");

	Params::UCFCoreBPLibrary_MakeSettingsFromProjectConfig_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreBPLibrary.MakeSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Default_language                                                 (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int64                              Game_id                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Api_key                                                          (Edit, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Mods_directory                                                   (Edit, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      User_data_directory                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Max_concurrent_installations                                     (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FCFCoreSettings             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FCFCoreSettings UCFCoreBPLibrary::MakeSettings(const class FString& Default_language, int64 Game_id, const class FString& Api_key, const class FString& Mods_directory, const class FString& User_data_directory, int32 Max_concurrent_installations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeSettings");

	Params::UCFCoreBPLibrary_MakeSettings_Params Parms{};

	Parms.Default_language = Default_language;
	Parms.Game_id = Game_id;
	Parms.Api_key = Api_key;
	Parms.Mods_directory = Mods_directory;
	Parms.User_data_directory = User_data_directory;
	Parms.Max_concurrent_installations = Max_concurrent_installations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreBPLibrary.MakeSearchModsFilter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Class_id                                                         (BlueprintVisible, ExportObject, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Category_id                                                      (EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Game_version                                                     (Edit, ExportObject, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Search_filter                                                    (Edit, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ECFCoreModsSearchSortFieldSort_field                                                       (Edit, ConstParm, ExportObject, Net, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ECFCoreSortOrder        Sort_order                                                       (Edit, BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ECFCoreModLoaderType    Mod_loader_type                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Game_version_type_id                                             (Edit, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FCFCoreSearchModsFilter     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FCFCoreSearchModsFilter UCFCoreBPLibrary::MakeSearchModsFilter(int32 Class_id, int32 Category_id, const class FString& Game_version, const class FString& Search_filter, enum class ECFCoreModsSearchSortField Sort_field, enum class ECFCoreSortOrder Sort_order, enum class ECFCoreModLoaderType Mod_loader_type, int32 Game_version_type_id)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeSearchModsFilter");

	Params::UCFCoreBPLibrary_MakeSearchModsFilter_Params Parms{};

	Parms.Class_id = Class_id;
	Parms.Category_id = Category_id;
	Parms.Game_version = Game_version;
	Parms.Search_filter = Search_filter;
	Parms.Sort_field = Sort_field;
	Parms.Sort_order = Sort_order;
	Parms.Mod_loader_type = Mod_loader_type;
	Parms.Game_version_type_id = Game_version_type_id;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreBPLibrary.MakeGetCategoriesFilter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Class_id                                                         (BlueprintVisible, ExportObject, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FCFCoreGetCategoriesFilter  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FCFCoreGetCategoriesFilter UCFCoreBPLibrary::MakeGetCategoriesFilter(int32 Class_id)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeGetCategoriesFilter");

	Params::UCFCoreBPLibrary_MakeGetCategoriesFilter_Params Parms{};

	Parms.Class_id = Class_id;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreBPLibrary.MakeExternalAuthAdditionalInfo
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime                   EulaAcceptTime                                                   (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FExternalAuthAdditionalInfo ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FExternalAuthAdditionalInfo UCFCoreBPLibrary::MakeExternalAuthAdditionalInfo(struct FDateTime* EulaAcceptTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeExternalAuthAdditionalInfo");

	Params::UCFCoreBPLibrary_MakeExternalAuthAdditionalInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EulaAcceptTime != nullptr)
		*EulaAcceptTime = std::move(Parms.EulaAcceptTime);

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreBPLibrary.MakeCreateModRequest
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Class_id                                                         (BlueprintVisible, ExportObject, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class FString                      Summary                                                          (ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// enum class ECFCoreMakrupType       Description_type                                                 (Edit, ConstParm, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Description                                                      (ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// int64                              Primary_category_id                                              (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<int64>                      Game_category_ids                                                (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               Is_experimental                                                  (Edit, BlueprintVisible, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FCreateModRequest           ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FCreateModRequest UCFCoreBPLibrary::MakeCreateModRequest(int64 Class_id, class FString* Name, enum class ECFCoreMakrupType Description_type, int64 Primary_category_id, const TArray<int64>& Game_category_ids, bool Is_experimental)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeCreateModRequest");

	Params::UCFCoreBPLibrary_MakeCreateModRequest_Params Parms{};

	Parms.Class_id = Class_id;
	Parms.Description_type = Description_type;
	Parms.Primary_category_id = Primary_category_id;
	Parms.Game_category_ids = Game_category_ids;
	Parms.Is_experimental = Is_experimental;

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
// enum class ECFCoreChangelogMarkupTypeChangelog_type                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Changelog                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      Filename                                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
// class FString                      DisplayName                                                      (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient)
// TArray<int64>                      GameVersionIds                                                   (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class ECFCoreFileReleaseType  ReleaseType                                                      (BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FModFileCookingOptions      CookingOptions                                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FCreateModFileRequest       ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FCreateModFileRequest UCFCoreBPLibrary::MakeCreateModFileRequest(enum class ECFCoreChangelogMarkupType Changelog_type, class FString* Changelog, TArray<int64>* GameVersionIds, enum class ECFCoreFileReleaseType* ReleaseType, struct FModFileCookingOptions* CookingOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeCreateModFileRequest");

	Params::UCFCoreBPLibrary_MakeCreateModFileRequest_Params Parms{};

	Parms.Changelog_type = Changelog_type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Changelog != nullptr)
		*Changelog = std::move(Parms.Changelog);

	if (GameVersionIds != nullptr)
		*GameVersionIds = std::move(Parms.GameVersionIds);

	if (ReleaseType != nullptr)
		*ReleaseType = Parms.ReleaseType;

	if (CookingOptions != nullptr)
		*CookingOptions = std::move(Parms.CookingOptions);

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreBPLibrary.MakeAssureServerModsUpdatedParams
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int64>                      ModIds                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// TArray<int64>                      DevModIds                                                        (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FAssureServerModsUpdatedParamsReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAssureServerModsUpdatedParams UCFCoreBPLibrary::MakeAssureServerModsUpdatedParams(const TArray<int64>& DevModIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeAssureServerModsUpdatedParams");

	Params::UCFCoreBPLibrary_MakeAssureServerModsUpdatedParams_Params Parms{};

	Parms.DevModIds = DevModIds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreBPLibrary.MakeApiRequestPagination
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// int32                              Page_size                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FCFCoreApiRequestPagination ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FCFCoreApiRequestPagination UCFCoreBPLibrary::MakeApiRequestPagination(int32 Page_size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeApiRequestPagination");

	Params::UCFCoreBPLibrary_MakeApiRequestPagination_Params Parms{};

	Parms.Page_size = Page_size;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreBPLibrary.FormatFileSize
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Bytes                                                            (Net, Parm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UCFCoreBPLibrary::FormatFileSize(int64 Bytes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "FormatFileSize");

	Params::UCFCoreBPLibrary_FormatFileSize_Params Parms{};

	Parms.Bytes = Bytes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreBPLibrary.BreakFileSize
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Bytes                                                            (Net, Parm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FCFCoreFileSize             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FCFCoreFileSize UCFCoreBPLibrary::BreakFileSize(int64 Bytes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "BreakFileSize");

	Params::UCFCoreBPLibrary_BreakFileSize_Params Parms{};

	Parms.Bytes = Bytes;

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
// int64                              Mod_id                                                           (Edit, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FUpdateModRequest           Update_mod_request                                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Avatar_image_filename                                            (Edit, BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::UpdateMod(int64* Mod_id, struct FUpdateModRequest* Update_mod_request, class FString* Avatar_image_filename, FDelegateProperty_* On_success, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "UpdateMod");

	Params::UCFCoreSubsystem_UpdateMod_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Mod_id != nullptr)
		*Mod_id = Parms.Mod_id;

	if (Update_mod_request != nullptr)
		*Update_mod_request = std::move(Parms.Update_mod_request);

	if (Avatar_image_filename != nullptr)
		*Avatar_image_filename = std::move(Parms.Avatar_image_filename);

	if (On_success != nullptr)
		*On_success = Parms.On_success;

}


// Function cfcore.CFCoreSubsystem.Unitialize
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnUninitialized                                                  (ConstParm, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, ConstParm, BlueprintVisible, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::Unitialize(FDelegateProperty_* OnUninitialized, FDelegateProperty_* OnError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "Unitialize");

	Params::UCFCoreSubsystem_Unitialize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OnUninitialized != nullptr)
		*OnUninitialized = Parms.OnUninitialized;

	if (OnError != nullptr)
		*OnError = Parms.OnError;

}


// Function cfcore.CFCoreSubsystem.UninstallMod
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int64                              Mod_id                                                           (Edit, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_uninstalled                                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::UninstallMod(int64* Mod_id, FDelegateProperty_* On_uninstalled, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "UninstallMod");

	Params::UCFCoreSubsystem_UninstallMod_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Mod_id != nullptr)
		*Mod_id = Parms.Mod_id;

	if (On_uninstalled != nullptr)
		*On_uninstalled = Parms.On_uninstalled;

}


// Function cfcore.CFCoreSubsystem.SynchronizeWithServer
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_success                                                       (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::SynchronizeWithServer(FDelegateProperty_* On_success, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "SynchronizeWithServer");

	Params::UCFCoreSubsystem_SynchronizeWithServer_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (On_success != nullptr)
		*On_success = Parms.On_success;

}


// Function cfcore.CFCoreSubsystem.SendSecurityCode
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Email                                                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::SendSecurityCode(const class FString& Email, FDelegateProperty_* On_success, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "SendSecurityCode");

	Params::UCFCoreSubsystem_SendSecurityCode_Params Parms{};

	Parms.Email = Email;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (On_success != nullptr)
		*On_success = Parms.On_success;

}


// Function cfcore.CFCoreSubsystem.Logout
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_success                                                       (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::Logout(FDelegateProperty_* On_success, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "Logout");

	Params::UCFCoreSubsystem_Logout_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (On_success != nullptr)
		*On_success = Parms.On_success;

}


// Function cfcore.CFCoreSubsystem.IsAuthenticated
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_is_auth                                                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::IsAuthenticated(FDelegateProperty_* On_is_auth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "IsAuthenticated");

	Params::UCFCoreSubsystem_IsAuthenticated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (On_is_auth != nullptr)
		*On_is_auth = Parms.On_is_auth;

}


// Function cfcore.CFCoreSubsystem.InstallMod
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreMod                  Mod                                                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 On_progress                                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_installed                                                     (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FCFCoreMod UCFCoreSubsystem::InstallMod(FDelegateProperty_* On_progress, FDelegateProperty_* On_installed, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "InstallMod");

	Params::UCFCoreSubsystem_InstallMod_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (On_progress != nullptr)
		*On_progress = Parms.On_progress;

	if (On_installed != nullptr)
		*On_installed = Parms.On_installed;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.Initialize
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreSettings             Settings                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
// FDelegateProperty_                 OnInitialized                                                    (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst)
// FDelegateProperty_                 OnError                                                          (Edit, ConstParm, BlueprintVisible, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::Initialize(struct FCFCoreSettings* Settings, FDelegateProperty_* OnError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "Initialize");

	Params::UCFCoreSubsystem_Initialize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Settings != nullptr)
		*Settings = std::move(Parms.Settings);

	if (OnError != nullptr)
		*OnError = Parms.OnError;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.GetModsDirInfo
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnModsDirInfo                                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, ConstParm, BlueprintVisible, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::GetModsDirInfo(FDelegateProperty_* OnModsDirInfo, FDelegateProperty_* OnError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "GetModsDirInfo");

	Params::UCFCoreSubsystem_GetModsDirInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OnModsDirInfo != nullptr)
		*OnModsDirInfo = Parms.OnModsDirInfo;

	if (OnError != nullptr)
		*OnError = Parms.OnError;

}


// Function cfcore.CFCoreSubsystem.GetInstalledMods
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_installed_mods                                                (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::GetInstalledMods(FDelegateProperty_* On_installed_mods, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "GetInstalledMods");

	Params::UCFCoreSubsystem_GetInstalledMods_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (On_installed_mods != nullptr)
		*On_installed_mods = Parms.On_installed_mods;

}


// Function cfcore.CFCoreSubsystem.GetAuthTerms
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_success                                                       (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::GetAuthTerms(FDelegateProperty_* On_success, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "GetAuthTerms");

	Params::UCFCoreSubsystem_GetAuthTerms_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (On_success != nullptr)
		*On_success = Parms.On_success;

}


// Function cfcore.CFCoreSubsystem.GenerateAuthTokenByExternalProvider
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ECFCoreExternalAuthProviderProvider                                                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      External_token                                                   (BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FExternalAuthAdditionalInfo Additional_info                                                  (Edit, ConstParm, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::GenerateAuthTokenByExternalProvider(enum class ECFCoreExternalAuthProvider* Provider, class FString* External_token, struct FExternalAuthAdditionalInfo* Additional_info, FDelegateProperty_* On_success, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "GenerateAuthTokenByExternalProvider");

	Params::UCFCoreSubsystem_GenerateAuthTokenByExternalProvider_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Provider != nullptr)
		*Provider = Parms.Provider;

	if (External_token != nullptr)
		*External_token = std::move(Parms.External_token);

	if (Additional_info != nullptr)
		*Additional_info = std::move(Parms.Additional_info);

	if (On_success != nullptr)
		*On_success = Parms.On_success;

}


// Function cfcore.CFCoreSubsystem.GenerateAuthToken
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Email                                                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// int32                              Security_code                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::GenerateAuthToken(const class FString& Email, int32* Security_code, FDelegateProperty_* On_success, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "GenerateAuthToken");

	Params::UCFCoreSubsystem_GenerateAuthToken_Params Parms{};

	Parms.Email = Email;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Security_code != nullptr)
		*Security_code = Parms.Security_code;

	if (On_success != nullptr)
		*On_success = Parms.On_success;

}


// Function cfcore.CFCoreSubsystem.CreateModFile
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FCreateModFileRequest       CreateModFileRequest                                             (Edit, BlueprintVisible, ExportObject, Parm, OutParm, Transient)
// class FString                      LocalFilenameToUpload                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnCreateModFileRequestId                                         (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnProgress                                                       (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnSuccess                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, ConstParm, BlueprintVisible, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::CreateModFile(struct FCreateModFileRequest* CreateModFileRequest, class FString* LocalFilenameToUpload, FDelegateProperty_* OnCreateModFileRequestId, FDelegateProperty_* OnProgress, FDelegateProperty_* OnError)
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

	if (LocalFilenameToUpload != nullptr)
		*LocalFilenameToUpload = std::move(Parms.LocalFilenameToUpload);

	if (OnCreateModFileRequestId != nullptr)
		*OnCreateModFileRequestId = Parms.OnCreateModFileRequestId;

	if (OnProgress != nullptr)
		*OnProgress = Parms.OnProgress;

	if (OnError != nullptr)
		*OnError = Parms.OnError;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.CreateMod
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCreateModRequest           Create_mod_request                                               (Edit, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Avatar_image_filename                                            (Edit, BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::CreateMod(struct FCreateModRequest* Create_mod_request, class FString* Avatar_image_filename, FDelegateProperty_* On_success, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "CreateMod");

	Params::UCFCoreSubsystem_CreateMod_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Create_mod_request != nullptr)
		*Create_mod_request = std::move(Parms.Create_mod_request);

	if (Avatar_image_filename != nullptr)
		*Avatar_image_filename = std::move(Parms.Avatar_image_filename);

	if (On_success != nullptr)
		*On_success = Parms.On_success;

}


// Function cfcore.CFCoreSubsystem.CreateCookedModFile
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int64                              SourceFileId                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FCreateCookedModFileRequest CreateCookedModFileRequest                                       (BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient)
// class FString                      LocalFilenameToUpload                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnCreateModFileRequestId                                         (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnProgress                                                       (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnSuccess                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, ConstParm, BlueprintVisible, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

FDelegateProperty_ UCFCoreSubsystem::CreateCookedModFile(int64* SourceFileId, struct FCreateCookedModFileRequest* CreateCookedModFileRequest, class FString* LocalFilenameToUpload, FDelegateProperty_* OnCreateModFileRequestId, FDelegateProperty_* OnProgress, FDelegateProperty_* OnError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "CreateCookedModFile");

	Params::UCFCoreSubsystem_CreateCookedModFile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SourceFileId != nullptr)
		*SourceFileId = Parms.SourceFileId;

	if (CreateCookedModFileRequest != nullptr)
		*CreateCookedModFileRequest = std::move(Parms.CreateCookedModFileRequest);

	if (LocalFilenameToUpload != nullptr)
		*LocalFilenameToUpload = std::move(Parms.LocalFilenameToUpload);

	if (OnCreateModFileRequestId != nullptr)
		*OnCreateModFileRequestId = Parms.OnCreateModFileRequestId;

	if (OnProgress != nullptr)
		*OnProgress = Parms.OnProgress;

	if (OnError != nullptr)
		*OnError = Parms.OnError;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.CancelInstallation
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int64                              Mod_id                                                           (Edit, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::CancelInstallation(int64* Mod_id, FDelegateProperty_* On_success, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "CancelInstallation");

	Params::UCFCoreSubsystem_CancelInstallation_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Mod_id != nullptr)
		*Mod_id = Parms.Mod_id;

	if (On_success != nullptr)
		*On_success = Parms.On_success;

}


// Function cfcore.CFCoreSubsystem.AssureServerModsUpdated
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAssureServerModsUpdatedParamsParams                                                           (Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// FDelegateProperty_                 OnProgress                                                       (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnUpdated                                                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, ConstParm, BlueprintVisible, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::AssureServerModsUpdated(const struct FAssureServerModsUpdatedParams& Params, FDelegateProperty_* OnProgress, FDelegateProperty_* OnUpdated, FDelegateProperty_* OnError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "AssureServerModsUpdated");

	Params::UCFCoreSubsystem_AssureServerModsUpdated_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OnProgress != nullptr)
		*OnProgress = Parms.OnProgress;

	if (OnUpdated != nullptr)
		*OnUpdated = Parms.OnUpdated;

	if (OnError != nullptr)
		*OnError = Parms.OnError;

}


// Function cfcore.CFCoreSubsystem.AssureClientModsUpdated
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int64>                      ServerFileIds                                                    (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnProgress                                                       (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnUpdated                                                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, ConstParm, BlueprintVisible, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::AssureClientModsUpdated(TArray<int64>* ServerFileIds, FDelegateProperty_* OnProgress, FDelegateProperty_* OnUpdated, FDelegateProperty_* OnError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "AssureClientModsUpdated");

	Params::UCFCoreSubsystem_AssureClientModsUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ServerFileIds != nullptr)
		*ServerFileIds = std::move(Parms.ServerFileIds);

	if (OnProgress != nullptr)
		*OnProgress = Parms.OnProgress;

	if (OnUpdated != nullptr)
		*OnUpdated = Parms.OnUpdated;

	if (OnError != nullptr)
		*OnError = Parms.OnError;

}


// Function cfcore.CFCoreSubsystem.ApiUpdateRating
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// enum class ECFCoreRatingVoteDirectionDirection                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

int64 UCFCoreSubsystem::ApiUpdateRating(enum class ECFCoreRatingVoteDirection* Direction, FDelegateProperty_* On_success, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiUpdateRating");

	Params::UCFCoreSubsystem_ApiUpdateRating_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Direction != nullptr)
		*Direction = Parms.Direction;

	if (On_success != nullptr)
		*On_success = Parms.On_success;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiUnblockMods
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUnblockModsRequest         Request                                                          (ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnResult                                                         (Edit, ConstParm, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, ConstParm, BlueprintVisible, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::ApiUnblockMods(struct FUnblockModsRequest* Request, FDelegateProperty_* OnResult, FDelegateProperty_* OnError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiUnblockMods");

	Params::UCFCoreSubsystem_ApiUnblockMods_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Request != nullptr)
		*Request = std::move(Parms.Request);

	if (OnResult != nullptr)
		*OnResult = Parms.OnResult;

	if (OnError != nullptr)
		*OnError = Parms.OnError;

}


// Function cfcore.CFCoreSubsystem.ApiSearchMods
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreSearchModsFilter     Filter                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config)
// struct FCFCoreApiRequestPagination Pagination                                                       (EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 On_results                                                       (ConstParm, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FCFCoreApiRequestPagination UCFCoreSubsystem::ApiSearchMods(struct FCFCoreSearchModsFilter* Filter, FDelegateProperty_* On_results, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiSearchMods");

	Params::UCFCoreSubsystem_ApiSearchMods_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Filter != nullptr)
		*Filter = std::move(Parms.Filter);

	if (On_results != nullptr)
		*On_results = Parms.On_results;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiReportMod
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int64                              ReasonId                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Report                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_reasons                                                       (BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

int64 UCFCoreSubsystem::ApiReportMod(int64* ReasonId, class FString* Report, FDelegateProperty_* On_reasons, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiReportMod");

	Params::UCFCoreSubsystem_ApiReportMod_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReasonId != nullptr)
		*ReasonId = Parms.ReasonId;

	if (Report != nullptr)
		*Report = std::move(Parms.Report);

	if (On_reasons != nullptr)
		*On_reasons = Parms.On_reasons;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiRemoveRating
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 On_success                                                       (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

int64 UCFCoreSubsystem::ApiRemoveRating(FDelegateProperty_* On_success, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiRemoveRating");

	Params::UCFCoreSubsystem_ApiRemoveRating_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (On_success != nullptr)
		*On_success = Parms.On_success;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetVersionTypes
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_results                                                       (ConstParm, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::ApiGetVersionTypes(FDelegateProperty_* On_results, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetVersionTypes");

	Params::UCFCoreSubsystem_ApiGetVersionTypes_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (On_results != nullptr)
		*On_results = Parms.On_results;

}


// Function cfcore.CFCoreSubsystem.ApiGetVersions
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_results                                                       (ConstParm, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::ApiGetVersions(FDelegateProperty_* On_results, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetVersions");

	Params::UCFCoreSubsystem_ApiGetVersions_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (On_results != nullptr)
		*On_results = Parms.On_results;

}


// Function cfcore.CFCoreSubsystem.ApiGetReportingReasons
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_results                                                       (ConstParm, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::ApiGetReportingReasons(FDelegateProperty_* On_results, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetReportingReasons");

	Params::UCFCoreSubsystem_ApiGetReportingReasons_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (On_results != nullptr)
		*On_results = Parms.On_results;

}


// Function cfcore.CFCoreSubsystem.ApiGetMyRatings
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_results                                                       (ConstParm, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::ApiGetMyRatings(FDelegateProperty_* On_results, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetMyRatings");

	Params::UCFCoreSubsystem_ApiGetMyRatings_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (On_results != nullptr)
		*On_results = Parms.On_results;

}


// Function cfcore.CFCoreSubsystem.ApiGetMyMods
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_results                                                       (ConstParm, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::ApiGetMyMods(FDelegateProperty_* On_results, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetMyMods");

	Params::UCFCoreSubsystem_ApiGetMyMods_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (On_results != nullptr)
		*On_results = Parms.On_results;

}


// Function cfcore.CFCoreSubsystem.ApiGetMods
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int64>                      ModIds                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 On_results                                                       (ConstParm, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<int64> UCFCoreSubsystem::ApiGetMods(FDelegateProperty_* On_results, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetMods");

	Params::UCFCoreSubsystem_ApiGetMods_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (On_results != nullptr)
		*On_results = Parms.On_results;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetModDescription
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 On_mod_desc                                                      (Edit, ConstParm, BlueprintVisible, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

int64 UCFCoreSubsystem::ApiGetModDescription(FDelegateProperty_* On_mod_desc, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetModDescription");

	Params::UCFCoreSubsystem_ApiGetModDescription_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (On_mod_desc != nullptr)
		*On_mod_desc = Parms.On_mod_desc;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetMod
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 On_mod                                                           (Edit, ConstParm, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

int64 UCFCoreSubsystem::ApiGetMod(FDelegateProperty_* On_mod, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetMod");

	Params::UCFCoreSubsystem_ApiGetMod_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (On_mod != nullptr)
		*On_mod = Parms.On_mod;

	return Parms.ReturnValue;

}


// Function cfcore.CFCoreSubsystem.ApiGetMe
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_results                                                       (ConstParm, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::ApiGetMe(FDelegateProperty_* On_results, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetMe");

	Params::UCFCoreSubsystem_ApiGetMe_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (On_results != nullptr)
		*On_results = Parms.On_results;

}


// Function cfcore.CFCoreSubsystem.ApiGetGame
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_game                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::ApiGetGame(FDelegateProperty_* On_game, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetGame");

	Params::UCFCoreSubsystem_ApiGetGame_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (On_game != nullptr)
		*On_game = Parms.On_game;

}


// Function cfcore.CFCoreSubsystem.ApiGetFiles
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int64>                      FileIds                                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 OnResults                                                        (ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, ConstParm, BlueprintVisible, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::ApiGetFiles(TArray<int64>* FileIds, FDelegateProperty_* OnResults, FDelegateProperty_* OnError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetFiles");

	Params::UCFCoreSubsystem_ApiGetFiles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FileIds != nullptr)
		*FileIds = std::move(Parms.FileIds);

	if (OnResults != nullptr)
		*OnResults = Parms.OnResults;

	if (OnError != nullptr)
		*OnError = Parms.OnError;

}


// Function cfcore.CFCoreSubsystem.ApiGetCategories
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreGetCategoriesFilter  Filter                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config)
// FDelegateProperty_                 On_results                                                       (ConstParm, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::ApiGetCategories(struct FCFCoreGetCategoriesFilter* Filter, FDelegateProperty_* On_results, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetCategories");

	Params::UCFCoreSubsystem_ApiGetCategories_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Filter != nullptr)
		*Filter = std::move(Parms.Filter);

	if (On_results != nullptr)
		*On_results = Parms.On_results;

}


// Function cfcore.CFCoreSubsystem.ApiGetBlockedModsDetails
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_result                                                        (Edit, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::ApiGetBlockedModsDetails(FDelegateProperty_* On_result, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetBlockedModsDetails");

	Params::UCFCoreSubsystem_ApiGetBlockedModsDetails_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (On_result != nullptr)
		*On_result = Parms.On_result;

}


// Function cfcore.CFCoreSubsystem.ApiGetActiveCookingVersion
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnVersion                                                        (BlueprintVisible, ExportObject, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnError                                                          (Edit, ConstParm, BlueprintVisible, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::ApiGetActiveCookingVersion(FDelegateProperty_* OnVersion, FDelegateProperty_* OnError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetActiveCookingVersion");

	Params::UCFCoreSubsystem_ApiGetActiveCookingVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OnVersion != nullptr)
		*OnVersion = Parms.OnVersion;

	if (OnError != nullptr)
		*OnError = Parms.OnError;

}


// Function cfcore.CFCoreSubsystem.ApiGenerateTempToken
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_result                                                        (Edit, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 On_error                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UCFCoreSubsystem::ApiGenerateTempToken(FDelegateProperty_* On_result, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGenerateTempToken");

	Params::UCFCoreSubsystem_ApiGenerateTempToken_Params Parms{};

	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (On_result != nullptr)
		*On_result = Parms.On_result;

}

}


