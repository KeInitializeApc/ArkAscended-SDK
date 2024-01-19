#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapFists.WeapFists_C
// (Actor)

class UClass* AWeapFists_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapFists_C");

	return Clss;
}


// WeapFists_C WeapFists.Default__WeapFists_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapFists_C* AWeapFists_C::GetDefaultObj()
{
	static class AWeapFists_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapFists_C*>(AWeapFists_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeapFists.WeapFists_C.BPOverrideMeleeSwingSocket
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        FromSocket                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ConstParm, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// class FName                        K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)

int32 AWeapFists_C::BPOverrideMeleeSwingSocket(class FName FromSocket, class FName ReturnValue, bool Temp_bool_Variable, class FString* CallFunc_Conv_NameToString_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class FString* CallFunc_Conv_NameToString_ReturnValue_1, class FName* CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapFists_C", "BPOverrideMeleeSwingSocket");

	Params::AWeapFists_C_BPOverrideMeleeSwingSocket_Params Parms{};

	Parms.FromSocket = FromSocket;
	Parms.ReturnValue = ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_NameToString_ReturnValue != nullptr)
		*CallFunc_Conv_NameToString_ReturnValue = std::move(Parms.CallFunc_Conv_NameToString_ReturnValue);

	if (CallFunc_Conv_NameToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_NameToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_NameToString_ReturnValue_1);

	if (CallFunc_Conv_StringToName_ReturnValue != nullptr)
		*CallFunc_Conv_StringToName_ReturnValue = Parms.CallFunc_Conv_StringToName_ReturnValue;

	return Parms.ReturnValue;

}

}


