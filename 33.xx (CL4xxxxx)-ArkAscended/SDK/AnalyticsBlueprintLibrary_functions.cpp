#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
// (None)

class UClass* UAnalyticsBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnalyticsBlueprintLibrary");

	return Clss;
}


// AnalyticsBlueprintLibrary AnalyticsBlueprintLibrary.Default__AnalyticsBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnalyticsBlueprintLibrary* UAnalyticsBlueprintLibrary::GetDefaultObj()
{
	static class UAnalyticsBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnalyticsBlueprintLibrary*>(UAnalyticsBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UAnalyticsBlueprintLibrary::StartSessionWithAttributes(const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "StartSessionWithAttributes");

	Params::UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Params Parms{};

	Parms.Attributes = Attributes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UAnalyticsBlueprintLibrary::StartSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "StartSession");

	Params::UAnalyticsBlueprintLibrary_StartSession_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      UserId                                                           (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

void UAnalyticsBlueprintLibrary::SetUserId(class FString* UserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "SetUserId");

	Params::UAnalyticsBlueprintLibrary_SetUserId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UserId != nullptr)
		*UserId = std::move(Parms.UserId);

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SessionId                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UAnalyticsBlueprintLibrary::SetSessionId(class FString* SessionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "SetSessionId");

	Params::UAnalyticsBlueprintLibrary_SetSessionId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SessionId != nullptr)
		*SessionId = std::move(Parms.SessionId);

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)

void UAnalyticsBlueprintLibrary::SetLocation(class FString* Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "SetLocation");

	Params::UAnalyticsBlueprintLibrary_SetLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Gender                                                           (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UAnalyticsBlueprintLibrary::SetGender(class FString* Gender)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "SetGender");

	Params::UAnalyticsBlueprintLibrary_SetGender_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Gender != nullptr)
		*Gender = std::move(Parms.Gender);

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      BuildInfo                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UAnalyticsBlueprintLibrary::SetBuildInfo(class FString* BuildInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "SetBuildInfo");

	Params::UAnalyticsBlueprintLibrary_SetBuildInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BuildInfo != nullptr)
		*BuildInfo = std::move(Parms.BuildInfo);

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Age                                                              (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

int32 UAnalyticsBlueprintLibrary::SetAge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "SetAge");

	Params::UAnalyticsBlueprintLibrary_SetAge_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      ItemID                                                           (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// int32                              ItemQuantity                                                     (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)

int32 UAnalyticsBlueprintLibrary::RecordSimpleItemPurchaseWithAttributes(class FString* ItemID, const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordSimpleItemPurchaseWithAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Params Parms{};

	Parms.Attributes = Attributes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ItemID != nullptr)
		*ItemID = std::move(Parms.ItemID);

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ItemID                                                           (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// int32                              ItemQuantity                                                     (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

int32 UAnalyticsBlueprintLibrary::RecordSimpleItemPurchase(class FString* ItemID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordSimpleItemPurchase");

	Params::UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ItemID != nullptr)
		*ItemID = std::move(Parms.ItemID);

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      GameCurrencyType                                                 (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              GameCurrencyAmount                                               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)

void UAnalyticsBlueprintLibrary::RecordSimpleCurrencyPurchaseWithAttributes(class FString* GameCurrencyType, int32* GameCurrencyAmount, const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordSimpleCurrencyPurchaseWithAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Params Parms{};

	Parms.Attributes = Attributes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (GameCurrencyType != nullptr)
		*GameCurrencyType = std::move(Parms.GameCurrencyType);

	if (GameCurrencyAmount != nullptr)
		*GameCurrencyAmount = Parms.GameCurrencyAmount;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      GameCurrencyType                                                 (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              GameCurrencyAmount                                               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UAnalyticsBlueprintLibrary::RecordSimpleCurrencyPurchase(class FString* GameCurrencyType, int32* GameCurrencyAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordSimpleCurrencyPurchase");

	Params::UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (GameCurrencyType != nullptr)
		*GameCurrencyType = std::move(Parms.GameCurrencyType);

	if (GameCurrencyAmount != nullptr)
		*GameCurrencyAmount = Parms.GameCurrencyAmount;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      ProgressType                                                     (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class FString>              ProgressNames                                                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)

void UAnalyticsBlueprintLibrary::RecordProgressWithFullHierarchyAndAttributes(class FString* ProgressType, TArray<class FString>* ProgressNames, const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordProgressWithFullHierarchyAndAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Params Parms{};

	Parms.Attributes = Attributes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ProgressType != nullptr)
		*ProgressType = std::move(Parms.ProgressType);

	if (ProgressNames != nullptr)
		*ProgressNames = std::move(Parms.ProgressNames);

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      ProgressType                                                     (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      ProgressName                                                     (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)

void UAnalyticsBlueprintLibrary::RecordProgressWithAttributes(class FString* ProgressType, class FString* ProgressName, const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordProgressWithAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Params Parms{};

	Parms.Attributes = Attributes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ProgressType != nullptr)
		*ProgressType = std::move(Parms.ProgressType);

	if (ProgressName != nullptr)
		*ProgressName = std::move(Parms.ProgressName);

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ProgressType                                                     (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      ProgressName                                                     (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UAnalyticsBlueprintLibrary::RecordProgress(class FString* ProgressType, class FString* ProgressName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordProgress");

	Params::UAnalyticsBlueprintLibrary_RecordProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ProgressType != nullptr)
		*ProgressType = std::move(Parms.ProgressType);

	if (ProgressName != nullptr)
		*ProgressName = std::move(Parms.ProgressName);

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ItemID                                                           (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// class FString                      Currency                                                         (ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              PerItemCost                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ItemQuantity                                                     (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

int32 UAnalyticsBlueprintLibrary::RecordItemPurchase(class FString* ItemID, class FString* Currency, int32* PerItemCost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordItemPurchase");

	Params::UAnalyticsBlueprintLibrary_RecordItemPurchase_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ItemID != nullptr)
		*ItemID = std::move(Parms.ItemID);

	if (Currency != nullptr)
		*Currency = std::move(Parms.Currency);

	if (PerItemCost != nullptr)
		*PerItemCost = Parms.PerItemCost;

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)

void UAnalyticsBlueprintLibrary::RecordEventWithAttributes(class FString* EventName, const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordEventWithAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Params Parms{};

	Parms.Attributes = Attributes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EventName != nullptr)
		*EventName = std::move(Parms.EventName);

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      AttributeName                                                    (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      AttributeValue                                                   (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UAnalyticsBlueprintLibrary::RecordEventWithAttribute(class FString* EventName, class FString* AttributeName, class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordEventWithAttribute");

	Params::UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EventName != nullptr)
		*EventName = std::move(Parms.EventName);

	if (AttributeName != nullptr)
		*AttributeName = std::move(Parms.AttributeName);

	if (AttributeValue != nullptr)
		*AttributeValue = std::move(Parms.AttributeValue);

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAnalyticsBlueprintLibrary::RecordEvent(class FString* EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordEvent");

	Params::UAnalyticsBlueprintLibrary_RecordEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EventName != nullptr)
		*EventName = std::move(Parms.EventName);

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)

class FString UAnalyticsBlueprintLibrary::RecordErrorWithAttributes(const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordErrorWithAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Params Parms{};

	Parms.Attributes = Attributes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

class FString UAnalyticsBlueprintLibrary::RecordError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordError");

	Params::UAnalyticsBlueprintLibrary_RecordError_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      GameCurrencyType                                                 (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              GameCurrencyAmount                                               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      RealCurrencyType                                                 (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              RealMoneyCost                                                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      PaymentProvider                                                  (Edit, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UAnalyticsBlueprintLibrary::RecordCurrencyPurchase(class FString* GameCurrencyType, int32* GameCurrencyAmount, class FString* RealCurrencyType, float* RealMoneyCost, class FString* PaymentProvider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordCurrencyPurchase");

	Params::UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (GameCurrencyType != nullptr)
		*GameCurrencyType = std::move(Parms.GameCurrencyType);

	if (GameCurrencyAmount != nullptr)
		*GameCurrencyAmount = Parms.GameCurrencyAmount;

	if (RealCurrencyType != nullptr)
		*RealCurrencyType = std::move(Parms.RealCurrencyType);

	if (RealMoneyCost != nullptr)
		*RealMoneyCost = Parms.RealMoneyCost;

	if (PaymentProvider != nullptr)
		*PaymentProvider = std::move(Parms.PaymentProvider);

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      GameCurrencyType                                                 (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              GameCurrencyAmount                                               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)

void UAnalyticsBlueprintLibrary::RecordCurrencyGivenWithAttributes(class FString* GameCurrencyType, int32* GameCurrencyAmount, const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordCurrencyGivenWithAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Params Parms{};

	Parms.Attributes = Attributes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (GameCurrencyType != nullptr)
		*GameCurrencyType = std::move(Parms.GameCurrencyType);

	if (GameCurrencyAmount != nullptr)
		*GameCurrencyAmount = Parms.GameCurrencyAmount;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      GameCurrencyType                                                 (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              GameCurrencyAmount                                               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UAnalyticsBlueprintLibrary::RecordCurrencyGiven(class FString* GameCurrencyType, int32* GameCurrencyAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordCurrencyGiven");

	Params::UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (GameCurrencyType != nullptr)
		*GameCurrencyType = std::move(Parms.GameCurrencyType);

	if (GameCurrencyAmount != nullptr)
		*GameCurrencyAmount = Parms.GameCurrencyAmount;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      AttributeName                                                    (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      AttributeValue                                                   (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FAnalyticsEventAttr         ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnalyticsEventAttr UAnalyticsBlueprintLibrary::MakeEventAttribute(class FString* AttributeName, class FString* AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "MakeEventAttribute");

	Params::UAnalyticsBlueprintLibrary_MakeEventAttribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeName != nullptr)
		*AttributeName = std::move(Parms.AttributeName);

	if (AttributeValue != nullptr)
		*AttributeValue = std::move(Parms.AttributeValue);

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UAnalyticsBlueprintLibrary::GetUserId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "GetUserId");

	Params::UAnalyticsBlueprintLibrary_GetUserId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UAnalyticsBlueprintLibrary::GetSessionId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "GetSessionId");

	Params::UAnalyticsBlueprintLibrary_GetSessionId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAnalyticsBlueprintLibrary::FlushEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "FlushEvents");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAnalyticsBlueprintLibrary::EndSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "EndSession");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


