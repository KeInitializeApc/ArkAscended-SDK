#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InventoryMenu2.InventoryMenu2_C
// (None)

class UClass* UInventoryMenu2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryMenu2_C");

	return Clss;
}


// InventoryMenu2_C InventoryMenu2.Default__InventoryMenu2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInventoryMenu2_C* UInventoryMenu2_C::GetDefaultObj()
{
	static class UInventoryMenu2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryMenu2_C*>(UInventoryMenu2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InventoryMenu2.InventoryMenu2_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInventoryMenu2_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryMenu2_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryMenu2.InventoryMenu2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInventoryMenu2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryMenu2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryMenu2.InventoryMenu2_C.ExecuteUbergraph_InventoryMenu2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)

void UInventoryMenu2_C::ExecuteUbergraph_InventoryMenu2(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryMenu2_C", "ExecuteUbergraph_InventoryMenu2");

	Params::UInventoryMenu2_C_ExecuteUbergraph_InventoryMenu2_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}

}


