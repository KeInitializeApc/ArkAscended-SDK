#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BaseHumanAnimBP_Fists.BaseHumanAnimBP_Fists_C
// (None)

class UClass* UBaseHumanAnimBP_Fists_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseHumanAnimBP_Fists_C");

	return Clss;
}


// BaseHumanAnimBP_Fists_C BaseHumanAnimBP_Fists.Default__BaseHumanAnimBP_Fists_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseHumanAnimBP_Fists_C* UBaseHumanAnimBP_Fists_C::GetDefaultObj()
{
	static class UBaseHumanAnimBP_Fists_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseHumanAnimBP_Fists_C*>(UBaseHumanAnimBP_Fists_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BaseHumanAnimBP_Fists.BaseHumanAnimBP_Fists_C.UpdateLayeringValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// double                             K2Node_VariableSet_Layering_L_Hand_ImplicitCast                  (Edit, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_Layering_Spine_ImplicitCast                   (Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_Layering_L_Arm_ImplicitCast                   (Edit, ExportObject, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_Layering_R_Hand_ImplicitCast                  (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_Layering_R_Arm_ImplicitCast                   (ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UBaseHumanAnimBP_Fists_C::UpdateLayeringValues(double K2Node_VariableSet_Layering_L_Hand_ImplicitCast, double K2Node_VariableSet_Layering_Spine_ImplicitCast, double K2Node_VariableSet_Layering_L_Arm_ImplicitCast, double K2Node_VariableSet_Layering_R_Hand_ImplicitCast, double K2Node_VariableSet_Layering_R_Arm_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_Fists_C", "UpdateLayeringValues");

	Params::UBaseHumanAnimBP_Fists_C_UpdateLayeringValues_Params Parms{};

	Parms.K2Node_VariableSet_Layering_L_Hand_ImplicitCast = K2Node_VariableSet_Layering_L_Hand_ImplicitCast;
	Parms.K2Node_VariableSet_Layering_Spine_ImplicitCast = K2Node_VariableSet_Layering_Spine_ImplicitCast;
	Parms.K2Node_VariableSet_Layering_L_Arm_ImplicitCast = K2Node_VariableSet_Layering_L_Arm_ImplicitCast;
	Parms.K2Node_VariableSet_Layering_R_Hand_ImplicitCast = K2Node_VariableSet_Layering_R_Hand_ImplicitCast;
	Parms.K2Node_VariableSet_Layering_R_Arm_ImplicitCast = K2Node_VariableSet_Layering_R_Arm_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


