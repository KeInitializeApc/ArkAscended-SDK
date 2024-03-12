#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InventoryPanel.InventoryPanel_C
// (None)

class UClass* UInventoryPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryPanel_C");

	return Clss;
}


// InventoryPanel_C InventoryPanel.Default__InventoryPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInventoryPanel_C* UInventoryPanel_C::GetDefaultObj()
{
	static class UInventoryPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryPanel_C*>(UInventoryPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InventoryPanel.InventoryPanel_C.Get_InventoryText_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)

enum class ESlateVisibility UInventoryPanel_C::Get_InventoryText_Visibility(enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryPanel_C", "Get_InventoryText_Visibility");

	Params::UInventoryPanel_C_Get_InventoryText_Visibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetVisibility_ReturnValue != nullptr)
		*CallFunc_GetVisibility_ReturnValue = Parms.CallFunc_GetVisibility_ReturnValue;

	return Parms.ReturnValue;

}


// Function InventoryPanel.InventoryPanel_C.BndEvt__InventoryPanel_AutoStackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UInventoryPanel_C::BndEvt__InventoryPanel_AutoStackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryPanel_C", "BndEvt__InventoryPanel_AutoStackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryPanel.InventoryPanel_C.BndEvt__InventoryPanel_ClearCraftingQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UInventoryPanel_C::BndEvt__InventoryPanel_ClearCraftingQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryPanel_C", "BndEvt__InventoryPanel_ClearCraftingQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryPanel.InventoryPanel_C.BndEvt__InventoryPanel_CreaturesButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UInventoryPanel_C::BndEvt__InventoryPanel_CreaturesButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryPanel_C", "BndEvt__InventoryPanel_CreaturesButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryPanel.InventoryPanel_C.BndEvt__InventoryPanel_DropAllButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UInventoryPanel_C::BndEvt__InventoryPanel_DropAllButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryPanel_C", "BndEvt__InventoryPanel_DropAllButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryPanel.InventoryPanel_C.BndEvt__InventoryPanel_NewFolderButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UInventoryPanel_C::BndEvt__InventoryPanel_NewFolderButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryPanel_C", "BndEvt__InventoryPanel_NewFolderButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryPanel.InventoryPanel_C.BndEvt__InventoryPanel_ShowAllButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UInventoryPanel_C::BndEvt__InventoryPanel_ShowAllButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryPanel_C", "BndEvt__InventoryPanel_ShowAllButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryPanel.InventoryPanel_C.BndEvt__InventoryPanel_ShowEngramsButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UInventoryPanel_C::BndEvt__InventoryPanel_ShowEngramsButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryPanel_C", "BndEvt__InventoryPanel_ShowEngramsButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryPanel.InventoryPanel_C.BndEvt__InventoryPanel_SkinsButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UInventoryPanel_C::BndEvt__InventoryPanel_SkinsButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryPanel_C", "BndEvt__InventoryPanel_SkinsButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryPanel.InventoryPanel_C.BndEvt__InventoryPanel_SortMenuButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UInventoryPanel_C::BndEvt__InventoryPanel_SortMenuButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryPanel_C", "BndEvt__InventoryPanel_SortMenuButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryPanel.InventoryPanel_C.BndEvt__InventoryPanel_TransferAllButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UInventoryPanel_C::BndEvt__InventoryPanel_TransferAllButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryPanel_C", "BndEvt__InventoryPanel_TransferAllButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryPanel.InventoryPanel_C.BndEvt__InventoryPanel_CraftingButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UInventoryPanel_C::BndEvt__InventoryPanel_CraftingButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryPanel_C", "BndEvt__InventoryPanel_CraftingButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryPanel.InventoryPanel_C.ExecuteUbergraph_InventoryPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)

void UInventoryPanel_C::ExecuteUbergraph_InventoryPanel(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryPanel_C", "ExecuteUbergraph_InventoryPanel");

	Params::UInventoryPanel_C_ExecuteUbergraph_InventoryPanel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}

}


