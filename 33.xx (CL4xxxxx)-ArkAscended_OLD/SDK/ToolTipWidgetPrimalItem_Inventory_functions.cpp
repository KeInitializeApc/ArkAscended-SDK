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
// int32                              EntryPoint                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UToolTipWidgetPrimalItem_Inventory_C::ExecuteUbergraph_ToolTipWidgetPrimalItem_Inventory(int32* EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolTipWidgetPrimalItem_Inventory_C", "ExecuteUbergraph_ToolTipWidgetPrimalItem_Inventory");

	Params::UToolTipWidgetPrimalItem_Inventory_C_ExecuteUbergraph_ToolTipWidgetPrimalItem_Inventory_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	return Parms.ReturnValue;

}

}

