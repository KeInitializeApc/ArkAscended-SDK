#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ListArkCharacterData.ListArkCharacterData_C
// (None)

class UClass* UListArkCharacterData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListArkCharacterData_C");

	return Clss;
}


// ListArkCharacterData_C ListArkCharacterData.Default__ListArkCharacterData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListArkCharacterData_C* UListArkCharacterData_C::GetDefaultObj()
{
	static class UListArkCharacterData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListArkCharacterData_C*>(UListArkCharacterData_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListArkCharacterData.ListArkCharacterData_C.OnUploadedCharactersListingsLoaded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// TArray<struct FArkTributePlayerDataListing>CharactersListings                                               (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UListArkCharacterData_C::OnUploadedCharactersListingsLoaded(bool* Success, TArray<struct FArkTributePlayerDataListing>* CharactersListings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListArkCharacterData_C", "OnUploadedCharactersListingsLoaded");

	Params::UListArkCharacterData_C_OnUploadedCharactersListingsLoaded_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (CharactersListings != nullptr)
		*CharactersListings = std::move(Parms.CharactersListings);

}


// Function ListArkCharacterData.ListArkCharacterData_C.ExecuteUbergraph_ListArkCharacterData
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_Event_Success                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FArkTributePlayerDataListing>K2Node_Event_CharactersListings                                  (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

TArray<struct FArkTributePlayerDataListing> UListArkCharacterData_C::ExecuteUbergraph_ListArkCharacterData(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListArkCharacterData_C", "ExecuteUbergraph_ListArkCharacterData");

	Params::UListArkCharacterData_C_ExecuteUbergraph_ListArkCharacterData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}

}


