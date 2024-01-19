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
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAnalyticsBlueprintLibrary::StartSessionWithAttributes(const TArray<struct FAnalyticsEventAttr>& Attributes, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "StartSessionWithAttributes");

	Params::UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Params Parms{};

	Parms.Attributes = Attributes;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class FString                      UserId                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class FString                      SessionId                                                        (Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// class FString                      Gender                                                           (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FString UAnalyticsBlueprintLibrary::SetGender()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "SetGender");

	Params::UAnalyticsBlueprintLibrary_SetGender_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      BuildInfo                                                        (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FString UAnalyticsBlueprintLibrary::SetBuildInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "SetBuildInfo");

	Params::UAnalyticsBlueprintLibrary_SetBuildInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Age                                                              (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UAnalyticsBlueprintLibrary::SetAge(int32 Age)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "SetAge");

	Params::UAnalyticsBlueprintLibrary_SetAge_Params Parms{};

	Parms.Age = Age;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      ItemID                                                           (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// int32                              ItemQuantity                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)

void UAnalyticsBlueprintLibrary::RecordSimpleItemPurchaseWithAttributes(class FString* ItemID, int32 ItemQuantity, const TArray<struct FAnalyticsEventAttr>& Attributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordSimpleItemPurchaseWithAttributes");

	Params::UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Params Parms{};

	Parms.ItemQuantity = ItemQuantity;
	Parms.Attributes = Attributes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ItemID != nullptr)
		*ItemID = std::move(Parms.ItemID);

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ItemID                                                           (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// int32                              ItemQuantity                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UAnalyticsBlueprintLibrary::RecordSimpleItemPurchase(class FString* ItemID, int32 ItemQuantity)
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

	if (ItemID != nullptr)
		*ItemID = std::move(Parms.ItemID);

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      GameCurrencyType                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              GameCurrencyAmount                                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)

int32 UAnalyticsBlueprintLibrary::RecordSimpleCurrencyPurchaseWithAttributes(const TArray<struct FAnalyticsEventAttr>& Attributes)
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

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      GameCurrencyType                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              GameCurrencyAmount                                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UAnalyticsBlueprintLibrary::RecordSimpleCurrencyPurchase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordSimpleCurrencyPurchase");

	Params::UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      ProgressType                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class FString>              ProgressNames                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)

TArray<class FString> UAnalyticsBlueprintLibrary::RecordProgressWithFullHierarchyAndAttributes(const TArray<struct FAnalyticsEventAttr>& Attributes)
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

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      ProgressType                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      ProgressName                                                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)

class FString UAnalyticsBlueprintLibrary::RecordProgressWithAttributes(const TArray<struct FAnalyticsEventAttr>& Attributes)
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

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ProgressType                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      ProgressName                                                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FString UAnalyticsBlueprintLibrary::RecordProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordProgress");

	Params::UAnalyticsBlueprintLibrary_RecordProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ItemID                                                           (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// class FString                      Currency                                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              PerItemCost                                                      (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ItemQuantity                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

int32 UAnalyticsBlueprintLibrary::RecordItemPurchase(class FString* ItemID, int32 ItemQuantity)
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

	if (ItemID != nullptr)
		*ItemID = std::move(Parms.ItemID);

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
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
// class FString                      EventName                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      AttributeName                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      AttributeValue                                                   (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FString UAnalyticsBlueprintLibrary::RecordEventWithAttribute(class FString* EventName)
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

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class FString                      GameCurrencyType                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              GameCurrencyAmount                                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      RealCurrencyType                                                 (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              RealMoneyCost                                                    (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      PaymentProvider                                                  (ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FString UAnalyticsBlueprintLibrary::RecordCurrencyPurchase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordCurrencyPurchase");

	Params::UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      GameCurrencyType                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              GameCurrencyAmount                                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FAnalyticsEventAttr> Attributes                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)

int32 UAnalyticsBlueprintLibrary::RecordCurrencyGivenWithAttributes(const TArray<struct FAnalyticsEventAttr>& Attributes)
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

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      GameCurrencyType                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              GameCurrencyAmount                                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UAnalyticsBlueprintLibrary::RecordCurrencyGiven()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnalyticsBlueprintLibrary", "RecordCurrencyGiven");

	Params::UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      AttributeName                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      AttributeValue                                                   (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FAnalyticsEventAttr         ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UAnalyticsBlueprintLibrary::MakeEventAttribute(const struct FAnalyticsEventAttr& ReturnValue)
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

	return Parms.ReturnValue;

}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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


