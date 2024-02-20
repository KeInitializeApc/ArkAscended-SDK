#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ToolTipWidgetPrimalItem_Inventory.ToolTipWidgetPrimalItem_Inventory_C
// (None)

class UClass* UToolTipWidgetPrimalItem_Inventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolTipWidgetPrimalItem_Inventory_C");

	return Clss;
}


// ToolTipWidgetPrimalItem_Inventory_C ToolTipWidgetPrimalItem_Inventory.Default__ToolTipWidgetPrimalItem_Inventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UToolTipWidgetPrimalItem_Inventory_C* UToolTipWidgetPrimalItem_Inventory_C::GetDefaultObj()
{
	static class UToolTipWidgetPrimalItem_Inventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolTipWidgetPrimalItem_Inventory_C*>(UToolTipWidgetPrimalItem_Inventory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ToolTipWidgetPrimalItem_Inventory.ToolTipWidgetPrimalItem_Inventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UToolTipWidgetPrimalItem_Inventory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolTipWidgetPrimalItem_Inventory_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToolTipWidgetPrimalItem_Inventory.ToolTipWidgetPrimalItem_Inventory_C.ExecuteUbergraph_ToolTipWidgetPrimalItem_Inventory
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UToolTipWidgetPrimalItem_Inventory_C::ExecuteUbergraph_ToolTipWidgetPrimalItem_Inventory(class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolTipWidgetPrimalItem_Inventory_C", "ExecuteUbergraph_ToolTipWidgetPrimalItem_Inventory");

	Params::UToolTipWidgetPrimalItem_Inventory_C_ExecuteUbergraph_ToolTipWidgetPrimalItem_Inventory_Params Parms{};

	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetOwningPlayer_ReturnValue != nullptr)
		*CallFunc_GetOwningPlayer_ReturnValue = Parms.CallFunc_GetOwningPlayer_ReturnValue;

	return Parms.ReturnValue;

}

}


