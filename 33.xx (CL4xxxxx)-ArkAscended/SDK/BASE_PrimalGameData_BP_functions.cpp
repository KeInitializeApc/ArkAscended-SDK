#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BASE_PrimalGameData_BP.BASE_PrimalGameData_BP_C
// (None)

class UClass* UBASE_PrimalGameData_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BASE_PrimalGameData_BP_C");

	return Clss;
}


// BASE_PrimalGameData_BP_C BASE_PrimalGameData_BP.Default__BASE_PrimalGameData_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBASE_PrimalGameData_BP_C* UBASE_PrimalGameData_BP_C::GetDefaultObj()
{
	static class UBASE_PrimalGameData_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBASE_PrimalGameData_BP_C*>(UBASE_PrimalGameData_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BASE_PrimalGameData_BP.BASE_PrimalGameData_BP_C.BPMergeModGameData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalGameData*             AnotherGameData                                                  (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class UBASE_PrimalGameData_BP_C*   K2Node_DynamicCast_AsBASE_Primal_Game_Data_BP                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

class UPrimalGameData* UBASE_PrimalGameData_BP_C::BPMergeModGameData(class UBASE_PrimalGameData_BP_C** K2Node_DynamicCast_AsBASE_Primal_Game_Data_BP, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BASE_PrimalGameData_BP_C", "BPMergeModGameData");

	Params::UBASE_PrimalGameData_BP_C_BPMergeModGameData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsBASE_Primal_Game_Data_BP != nullptr)
		*K2Node_DynamicCast_AsBASE_Primal_Game_Data_BP = Parms.K2Node_DynamicCast_AsBASE_Primal_Game_Data_BP;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}

}


