#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_StatEquipped.DataListEntryWidgetPrimalItem_StatEquipped_C
// (None)

class UClass* UDataListEntryWidgetPrimalItem_StatEquipped_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListEntryWidgetPrimalItem_StatEquipped_C");

	return Clss;
}


// DataListEntryWidgetPrimalItem_StatEquipped_C DataListEntryWidgetPrimalItem_StatEquipped.Default__DataListEntryWidgetPrimalItem_StatEquipped_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListEntryWidgetPrimalItem_StatEquipped_C* UDataListEntryWidgetPrimalItem_StatEquipped_C::GetDefaultObj()
{
	static class UDataListEntryWidgetPrimalItem_StatEquipped_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListEntryWidgetPrimalItem_StatEquipped_C*>(UDataListEntryWidgetPrimalItem_StatEquipped_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataListEntryWidgetPrimalItem_StatEquipped.DataListEntryWidgetPrimalItem_StatEquipped_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext               Context                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsHovered_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsMenuAnchorOpen_ReturnValue                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)

bool UDataListEntryWidgetPrimalItem_StatEquipped_C::OnPaint(struct FPaintContext* Context, bool CallFunc_IsHovered_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListEntryWidgetPrimalItem_StatEquipped_C", "OnPaint");

	Params::UDataListEntryWidgetPrimalItem_StatEquipped_C_OnPaint_Params Parms{};

	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	return Parms.ReturnValue;

}

}


