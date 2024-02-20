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
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FAnalyticsEventAttr> UAnalyticsBlueprintLibrary::StartSessionWithAttributes(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "StartSessionWithAttributes");

	Params::UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UAnalyticsBlueprintLibrary::StartSession(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "StartSession");

	Params::UAnalyticsBlueprintLibrary_StartSession_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      UserId                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString UAnalyticsBlueprintLibrary::SetUserId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "SetUserId");

	Params::UAnalyticsBlueprintLibrary_SetUserId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SessionId                                                        (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

class FString UAnalyticsBlueprintLibrary::SetSessionId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "SetSessionId");

	Params::UAnalyticsBlueprintLibrary_SetSessionId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// class FString                      Gender                                                           (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// class FString                      BuildInfo                                                        (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// int32                              Age                                                              (BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

void UAnalyticsBlueprintLibrary::SetAge(int32* Age)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "SetAge");

	Params::UAnalyticsBlueprintLibrary_SetAge_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Age != nullptr)
		*Age = Parms.Age;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      ItemID                                                           (BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// int32                              ItemQuantity                                                     (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Config, GlobalConfig, SubobjectReference)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config)

TArray<struct FAnalyticsEventAttr> UAnalyticsBlueprintLibrary::RecordSimpleItemPurchaseWithAttributes(int32 ItemQuantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordSimpleItemPurchaseWithAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Params Parms{};

	Parms.ItemQuantity = ItemQuantity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ItemID                                                           (BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// int32                              ItemQuantity                                                     (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Config, GlobalConfig, SubobjectReference)

class FString UAnalyticsBlueprintLibrary::RecordSimpleItemPurchase(int32 ItemQuantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordSimpleItemPurchase");

	Params::UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Params Parms{};

	Parms.ItemQuantity = ItemQuantity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      GameCurrencyType                                                 (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// int32                              GameCurrencyAmount                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config)

TArray<struct FAnalyticsEventAttr> UAnalyticsBlueprintLibrary::RecordSimpleCurrencyPurchaseWithAttributes(class FString* GameCurrencyType, int32* GameCurrencyAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordSimpleCurrencyPurchaseWithAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (GameCurrencyType != nullptr)
		*GameCurrencyType = std::move(Parms.GameCurrencyType);

	if (GameCurrencyAmount != nullptr)
		*GameCurrencyAmount = Parms.GameCurrencyAmount;

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      GameCurrencyType                                                 (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// int32                              GameCurrencyAmount                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// class FString                      ProgressType                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<class FString>              ProgressNames                                                    (ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config)

TArray<struct FAnalyticsEventAttr> UAnalyticsBlueprintLibrary::RecordProgressWithFullHierarchyAndAttributes(class FString* ProgressType, TArray<class FString>* ProgressNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordProgressWithFullHierarchyAndAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ProgressType != nullptr)
		*ProgressType = std::move(Parms.ProgressType);

	if (ProgressNames != nullptr)
		*ProgressNames = std::move(Parms.ProgressNames);

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      ProgressType                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FString                      ProgressName                                                     (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config)

TArray<struct FAnalyticsEventAttr> UAnalyticsBlueprintLibrary::RecordProgressWithAttributes(class FString* ProgressType, class FString* ProgressName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordProgressWithAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ProgressType != nullptr)
		*ProgressType = std::move(Parms.ProgressType);

	if (ProgressName != nullptr)
		*ProgressName = std::move(Parms.ProgressName);

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ProgressType                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FString                      ProgressName                                                     (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// class FString                      ItemID                                                           (BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// class FString                      Currency                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// int32                              PerItemCost                                                      (ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// int32                              ItemQuantity                                                     (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Config, GlobalConfig, SubobjectReference)

class FString UAnalyticsBlueprintLibrary::RecordItemPurchase(class FString* Currency, int32* PerItemCost, int32 ItemQuantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordItemPurchase");

	Params::UAnalyticsBlueprintLibrary_RecordItemPurchase_Params Parms{};

	Parms.ItemQuantity = ItemQuantity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Currency != nullptr)
		*Currency = std::move(Parms.Currency);

	if (PerItemCost != nullptr)
		*PerItemCost = Parms.PerItemCost;

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (ExportObject, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config)

TArray<struct FAnalyticsEventAttr> UAnalyticsBlueprintLibrary::RecordEventWithAttributes(class FString* EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordEventWithAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EventName != nullptr)
		*EventName = std::move(Parms.EventName);

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (ExportObject, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      AttributeName                                                    (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      AttributeValue                                                   (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

class FString UAnalyticsBlueprintLibrary::RecordEventWithAttribute(class FString* EventName, class FString* AttributeValue)
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

	if (AttributeValue != nullptr)
		*AttributeValue = std::move(Parms.AttributeValue);

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (ExportObject, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

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
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config)

TArray<struct FAnalyticsEventAttr> UAnalyticsBlueprintLibrary::RecordErrorWithAttributes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordErrorWithAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Params Parms{};


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
// class FString                      GameCurrencyType                                                 (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// int32                              GameCurrencyAmount                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FString                      RealCurrencyType                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              RealMoneyCost                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FString                      PaymentProvider                                                  (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// class FString                      GameCurrencyType                                                 (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// int32                              GameCurrencyAmount                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config)

TArray<struct FAnalyticsEventAttr> UAnalyticsBlueprintLibrary::RecordCurrencyGivenWithAttributes(class FString* GameCurrencyType, int32* GameCurrencyAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordCurrencyGivenWithAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (GameCurrencyType != nullptr)
		*GameCurrencyType = std::move(Parms.GameCurrencyType);

	if (GameCurrencyAmount != nullptr)
		*GameCurrencyAmount = Parms.GameCurrencyAmount;

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      GameCurrencyType                                                 (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// int32                              GameCurrencyAmount                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// class FString                      AttributeName                                                    (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      AttributeValue                                                   (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FAnalyticsEventAttr         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString UAnalyticsBlueprintLibrary::MakeEventAttribute(class FString* AttributeValue, const struct FAnalyticsEventAttr& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "MakeEventAttribute");

	Params::UAnalyticsBlueprintLibrary_MakeEventAttribute_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = std::move(Parms.AttributeValue);

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UAnalyticsBlueprintLibrary::GetUserId(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "GetUserId");

	Params::UAnalyticsBlueprintLibrary_GetUserId_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UAnalyticsBlueprintLibrary::GetSessionId(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "GetSessionId");

	Params::UAnalyticsBlueprintLibrary_GetSessionId_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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


