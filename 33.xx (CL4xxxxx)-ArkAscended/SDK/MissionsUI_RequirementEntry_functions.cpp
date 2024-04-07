#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MissionsUI_RequirementEntry.MissionsUI_RequirementEntry_C
// (None)

class UClass* UMissionsUI_RequirementEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionsUI_RequirementEntry_C");

	return Clss;
}


// MissionsUI_RequirementEntry_C MissionsUI_RequirementEntry.Default__MissionsUI_RequirementEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionsUI_RequirementEntry_C* UMissionsUI_RequirementEntry_C::GetDefaultObj()
{
	static class UMissionsUI_RequirementEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionsUI_RequirementEntry_C*>(UMissionsUI_RequirementEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MissionsUI_RequirementEntry.MissionsUI_RequirementEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMissionsUI_RequirementEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionsUI_RequirementEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionsUI_RequirementEntry.MissionsUI_RequirementEntry_C.ExecuteUbergraph_MissionsUI_RequirementEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Initialize_ReturnValue                                  (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

bool UMissionsUI_RequirementEntry_C::ExecuteUbergraph_MissionsUI_RequirementEntry(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionsUI_RequirementEntry_C", "ExecuteUbergraph_MissionsUI_RequirementEntry");

	Params::UMissionsUI_RequirementEntry_C_ExecuteUbergraph_MissionsUI_RequirementEntry_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}

}


