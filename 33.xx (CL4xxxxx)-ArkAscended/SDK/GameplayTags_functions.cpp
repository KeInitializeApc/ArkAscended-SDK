#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameplayTags.BlueprintGameplayTagLibrary
// (None)

class UClass* UBlueprintGameplayTagLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlueprintGameplayTagLibrary");

	return Clss;
}


// BlueprintGameplayTagLibrary GameplayTags.Default__BlueprintGameplayTagLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlueprintGameplayTagLibrary* UBlueprintGameplayTagLibrary::GetDefaultObj()
{
	static class UBlueprintGameplayTagLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlueprintGameplayTagLibrary*>(UBlueprintGameplayTagLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FGameplayTag                Tag                                                              (Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBlueprintGameplayTagLibrary::RemoveGameplayTag(struct FGameplayTag* Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "RemoveGameplayTag");

	Params::UBlueprintGameplayTagLibrary_RemoveGameplayTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Tag != nullptr)
		*Tag = std::move(Parms.Tag);

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                A                                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// class FString                      B                                                                (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBlueprintGameplayTagLibrary::NotEqual_TagTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "NotEqual_TagTag");

	Params::UBlueprintGameplayTagLibrary_NotEqual_TagTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       A                                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// class FString                      B                                                                (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBlueprintGameplayTagLibrary::NotEqual_TagContainerTagContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "NotEqual_TagContainerTagContainer");

	Params::UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       A                                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// struct FGameplayTagContainer       B                                                                (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBlueprintGameplayTagLibrary::NotEqual_GameplayTagContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "NotEqual_GameplayTagContainer");

	Params::UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                A                                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// struct FGameplayTag                B                                                                (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBlueprintGameplayTagLibrary::NotEqual_GameplayTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "NotEqual_GameplayTag");

	Params::UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                TagOne                                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FGameplayTag                TagTwo                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bExactMatch                                                      (BlueprintReadOnly, Parm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBlueprintGameplayTagLibrary::MatchesTag(struct FGameplayTag* TagOne, struct FGameplayTag* TagTwo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MatchesTag");

	Params::UBlueprintGameplayTagLibrary_MatchesTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TagOne != nullptr)
		*TagOne = std::move(Parms.TagOne);

	if (TagTwo != nullptr)
		*TagTwo = std::move(Parms.TagTwo);

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                TagOne                                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FGameplayTagContainer       OtherContainer                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bExactMatch                                                      (BlueprintReadOnly, Parm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBlueprintGameplayTagLibrary::MatchesAnyTags(struct FGameplayTag* TagOne)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MatchesAnyTags");

	Params::UBlueprintGameplayTagLibrary_MatchesAnyTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TagOne != nullptr)
		*TagOne = std::move(Parms.TagOne);

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// struct FGameplayTagContainer       ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MakeLiteralGameplayTagContainer");

	Params::UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// struct FGameplayTag                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGameplayTag UBlueprintGameplayTagLibrary::MakeLiteralGameplayTag(const struct FGameplayTag& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MakeLiteralGameplayTag");

	Params::UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagQuery           TagQuery                                                         (ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FGameplayTagQuery           ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGameplayTagQuery UBlueprintGameplayTagLibrary::MakeGameplayTagQuery(struct FGameplayTagQuery* TagQuery)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MakeGameplayTagQuery");

	Params::UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TagQuery != nullptr)
		*TagQuery = std::move(Parms.TagQuery);

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                SingleTag                                                        (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FGameplayTagContainer       ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromTag(struct FGameplayTag* SingleTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MakeGameplayTagContainerFromTag");

	Params::UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SingleTag != nullptr)
		*SingleTag = std::move(Parms.SingleTag);

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FGameplayTag>        GameplayTags                                                     (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// struct FGameplayTagContainer       ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MakeGameplayTagContainerFromArray");

	Params::UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagQuery           TagQuery                                                         (ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBlueprintGameplayTagLibrary::IsTagQueryEmpty(struct FGameplayTagQuery* TagQuery)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "IsTagQueryEmpty");

	Params::UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TagQuery != nullptr)
		*TagQuery = std::move(Parms.TagQuery);

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBlueprintGameplayTagLibrary::IsGameplayTagValid(const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "IsGameplayTagValid");

	Params::UBlueprintGameplayTagLibrary_IsGameplayTagValid_Params Parms{};

	Parms.GameplayTag = GameplayTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FGameplayTag                Tag                                                              (Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bExactMatch                                                      (BlueprintReadOnly, Parm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBlueprintGameplayTagLibrary::HasTag(struct FGameplayTag* Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "HasTag");

	Params::UBlueprintGameplayTagLibrary_HasTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Tag != nullptr)
		*Tag = std::move(Parms.Tag);

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FGameplayTagContainer       OtherContainer                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bExactMatch                                                      (BlueprintReadOnly, Parm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBlueprintGameplayTagLibrary::HasAnyTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "HasAnyTags");

	Params::UBlueprintGameplayTagLibrary_HasAnyTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FGameplayTagContainer       OtherContainer                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bExactMatch                                                      (BlueprintReadOnly, Parm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBlueprintGameplayTagLibrary::HasAllTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "HasAllTags");

	Params::UBlueprintGameplayTagLibrary_HasAllTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IGameplayTagAssetInterface>TagContainerInterface                                            (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FGameplayTagContainer       OtherContainer                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBlueprintGameplayTagLibrary::HasAllMatchingGameplayTags(TScriptInterface<class IGameplayTagAssetInterface>* TagContainerInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "HasAllMatchingGameplayTags");

	Params::UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TagContainerInterface != nullptr)
		*TagContainerInterface = Parms.TagContainerInterface;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst)
// class FName                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UBlueprintGameplayTagLibrary::GetTagName(const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "GetTagName");

	Params::UBlueprintGameplayTagLibrary_GetTagName_Params Parms{};

	Parms.GameplayTag = GameplayTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UBlueprintGameplayTagLibrary::GetNumGameplayTagsInContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "GetNumGameplayTagsInContainer");

	Params::UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTagContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "GetDebugStringFromGameplayTagContainer");

	Params::UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "GetDebugStringFromGameplayTag");

	Params::UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Params Parms{};

	Parms.GameplayTag = GameplayTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UClass*                      ActorClass                                                       (ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FGameplayTagQuery           GameplayTagQuery                                                 (Edit, ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst)
// TArray<class AActor*>              OutActors                                                        (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class AActor*> UBlueprintGameplayTagLibrary::GetAllActorsOfClassMatchingTagQuery(class UClass* ActorClass, const struct FGameplayTagQuery& GameplayTagQuery)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "GetAllActorsOfClassMatchingTagQuery");

	Params::UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Params Parms{};

	Parms.ActorClass = ActorClass;
	Parms.GameplayTagQuery = GameplayTagQuery;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       A                                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// struct FGameplayTagContainer       B                                                                (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBlueprintGameplayTagLibrary::EqualEqual_GameplayTagContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "EqualEqual_GameplayTagContainer");

	Params::UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                A                                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// struct FGameplayTag                B                                                                (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBlueprintGameplayTagLibrary::EqualEqual_GameplayTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "EqualEqual_GameplayTag");

	Params::UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IGameplayTagAssetInterface>TagContainerInterface                                            (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FGameplayTag                Tag                                                              (Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBlueprintGameplayTagLibrary::DoesTagAssetInterfaceHaveTag(TScriptInterface<class IGameplayTagAssetInterface>* TagContainerInterface, struct FGameplayTag* Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "DoesTagAssetInterfaceHaveTag");

	Params::UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TagContainerInterface != nullptr)
		*TagContainerInterface = Parms.TagContainerInterface;

	if (Tag != nullptr)
		*Tag = std::move(Parms.Tag);

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FGameplayTagQuery           TagQuery                                                         (ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBlueprintGameplayTagLibrary::DoesContainerMatchTagQuery(struct FGameplayTagQuery* TagQuery)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "DoesContainerMatchTagQuery");

	Params::UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TagQuery != nullptr)
		*TagQuery = std::move(Parms.TagQuery);

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       GameplayTagContainer                                             (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst)
// TArray<struct FGameplayTag>        GameplayTags                                                     (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

TArray<struct FGameplayTag> UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "BreakGameplayTagContainer");

	Params::UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Params Parms{};

	Parms.GameplayTagContainer = GameplayTagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       InOutTagContainer                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FGameplayTagContainer       InTagContainer                                                   (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UBlueprintGameplayTagLibrary::AppendGameplayTagContainers(const struct FGameplayTagContainer& InOutTagContainer, struct FGameplayTagContainer* InTagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "AppendGameplayTagContainers");

	Params::UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params Parms{};

	Parms.InOutTagContainer = InOutTagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTagContainer != nullptr)
		*InTagContainer = std::move(Parms.InTagContainer);

}


// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FGameplayTag                Tag                                                              (Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGameplayTagContainer UBlueprintGameplayTagLibrary::AddGameplayTag(struct FGameplayTag* Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "AddGameplayTag");

	Params::UBlueprintGameplayTagLibrary_AddGameplayTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Tag != nullptr)
		*Tag = std::move(Parms.Tag);

	return Parms.ReturnValue;

}


// Class GameplayTags.GameplayTagAssetInterface
// (None)

class UClass* IGameplayTagAssetInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTagAssetInterface");

	return Clss;
}


// GameplayTagAssetInterface GameplayTags.Default__GameplayTagAssetInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IGameplayTagAssetInterface* IGameplayTagAssetInterface::GetDefaultObj()
{
	static class IGameplayTagAssetInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IGameplayTagAssetInterface*>(IGameplayTagAssetInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                TagToCheck                                                       (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool IGameplayTagAssetInterface::HasMatchingGameplayTag(struct FGameplayTag* TagToCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTagAssetInterface", "HasMatchingGameplayTag");

	Params::IGameplayTagAssetInterface_HasMatchingGameplayTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TagToCheck != nullptr)
		*TagToCheck = std::move(Parms.TagToCheck);

	return Parms.ReturnValue;

}


// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool IGameplayTagAssetInterface::HasAnyMatchingGameplayTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTagAssetInterface", "HasAnyMatchingGameplayTags");

	Params::IGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool IGameplayTagAssetInterface::HasAllMatchingGameplayTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTagAssetInterface", "HasAllMatchingGameplayTags");

	Params::IGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

struct FGameplayTagContainer IGameplayTagAssetInterface::GetOwnedGameplayTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTagAssetInterface", "GetOwnedGameplayTags");

	Params::IGameplayTagAssetInterface_GetOwnedGameplayTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameplayTags.EditableGameplayTagQuery
// (None)

class UClass* UEditableGameplayTagQuery::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQuery");

	return Clss;
}


// EditableGameplayTagQuery GameplayTags.Default__EditableGameplayTagQuery
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQuery* UEditableGameplayTagQuery::GetDefaultObj()
{
	static class UEditableGameplayTagQuery* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQuery*>(UEditableGameplayTagQuery::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.EditableGameplayTagQueryExpression
// (None)

class UClass* UEditableGameplayTagQueryExpression::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression");

	return Clss;
}


// EditableGameplayTagQueryExpression GameplayTags.Default__EditableGameplayTagQueryExpression
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQueryExpression* UEditableGameplayTagQueryExpression::GetDefaultObj()
{
	static class UEditableGameplayTagQueryExpression* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQueryExpression*>(UEditableGameplayTagQueryExpression::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// (None)

class UClass* UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_AnyTagsMatch");

	return Clss;
}


// EditableGameplayTagQueryExpression_AnyTagsMatch GameplayTags.Default__EditableGameplayTagQueryExpression_AnyTagsMatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQueryExpression_AnyTagsMatch* UEditableGameplayTagQueryExpression_AnyTagsMatch::GetDefaultObj()
{
	static class UEditableGameplayTagQueryExpression_AnyTagsMatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQueryExpression_AnyTagsMatch*>(UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// (None)

class UClass* UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_AllTagsMatch");

	return Clss;
}


// EditableGameplayTagQueryExpression_AllTagsMatch GameplayTags.Default__EditableGameplayTagQueryExpression_AllTagsMatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQueryExpression_AllTagsMatch* UEditableGameplayTagQueryExpression_AllTagsMatch::GetDefaultObj()
{
	static class UEditableGameplayTagQueryExpression_AllTagsMatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQueryExpression_AllTagsMatch*>(UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// (None)

class UClass* UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_NoTagsMatch");

	return Clss;
}


// EditableGameplayTagQueryExpression_NoTagsMatch GameplayTags.Default__EditableGameplayTagQueryExpression_NoTagsMatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQueryExpression_NoTagsMatch* UEditableGameplayTagQueryExpression_NoTagsMatch::GetDefaultObj()
{
	static class UEditableGameplayTagQueryExpression_NoTagsMatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQueryExpression_NoTagsMatch*>(UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// (None)

class UClass* UEditableGameplayTagQueryExpression_AnyExprMatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_AnyExprMatch");

	return Clss;
}


// EditableGameplayTagQueryExpression_AnyExprMatch GameplayTags.Default__EditableGameplayTagQueryExpression_AnyExprMatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQueryExpression_AnyExprMatch* UEditableGameplayTagQueryExpression_AnyExprMatch::GetDefaultObj()
{
	static class UEditableGameplayTagQueryExpression_AnyExprMatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQueryExpression_AnyExprMatch*>(UEditableGameplayTagQueryExpression_AnyExprMatch::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// (None)

class UClass* UEditableGameplayTagQueryExpression_AllExprMatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_AllExprMatch");

	return Clss;
}


// EditableGameplayTagQueryExpression_AllExprMatch GameplayTags.Default__EditableGameplayTagQueryExpression_AllExprMatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQueryExpression_AllExprMatch* UEditableGameplayTagQueryExpression_AllExprMatch::GetDefaultObj()
{
	static class UEditableGameplayTagQueryExpression_AllExprMatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQueryExpression_AllExprMatch*>(UEditableGameplayTagQueryExpression_AllExprMatch::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// (None)

class UClass* UEditableGameplayTagQueryExpression_NoExprMatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_NoExprMatch");

	return Clss;
}


// EditableGameplayTagQueryExpression_NoExprMatch GameplayTags.Default__EditableGameplayTagQueryExpression_NoExprMatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQueryExpression_NoExprMatch* UEditableGameplayTagQueryExpression_NoExprMatch::GetDefaultObj()
{
	static class UEditableGameplayTagQueryExpression_NoExprMatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQueryExpression_NoExprMatch*>(UEditableGameplayTagQueryExpression_NoExprMatch::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.GameplayTagsManager
// (None)

class UClass* UGameplayTagsManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTagsManager");

	return Clss;
}


// GameplayTagsManager GameplayTags.Default__GameplayTagsManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayTagsManager* UGameplayTagsManager::GetDefaultObj()
{
	static class UGameplayTagsManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTagsManager*>(UGameplayTagsManager::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.GameplayTagsList
// (None)

class UClass* UGameplayTagsList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTagsList");

	return Clss;
}


// GameplayTagsList GameplayTags.Default__GameplayTagsList
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayTagsList* UGameplayTagsList::GetDefaultObj()
{
	static class UGameplayTagsList* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTagsList*>(UGameplayTagsList::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.RestrictedGameplayTagsList
// (None)

class UClass* URestrictedGameplayTagsList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RestrictedGameplayTagsList");

	return Clss;
}


// RestrictedGameplayTagsList GameplayTags.Default__RestrictedGameplayTagsList
// (Public, ClassDefaultObject, ArchetypeObject)

class URestrictedGameplayTagsList* URestrictedGameplayTagsList::GetDefaultObj()
{
	static class URestrictedGameplayTagsList* Default = nullptr;

	if (!Default)
		Default = static_cast<URestrictedGameplayTagsList*>(URestrictedGameplayTagsList::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.GameplayTagsSettings
// (None)

class UClass* UGameplayTagsSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTagsSettings");

	return Clss;
}


// GameplayTagsSettings GameplayTags.Default__GameplayTagsSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayTagsSettings* UGameplayTagsSettings::GetDefaultObj()
{
	static class UGameplayTagsSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTagsSettings*>(UGameplayTagsSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.GameplayTagsDeveloperSettings
// (None)

class UClass* UGameplayTagsDeveloperSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTagsDeveloperSettings");

	return Clss;
}


// GameplayTagsDeveloperSettings GameplayTags.Default__GameplayTagsDeveloperSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayTagsDeveloperSettings* UGameplayTagsDeveloperSettings::GetDefaultObj()
{
	static class UGameplayTagsDeveloperSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTagsDeveloperSettings*>(UGameplayTagsDeveloperSettings::StaticClass()->DefaultObject);

	return Default;
}

}


