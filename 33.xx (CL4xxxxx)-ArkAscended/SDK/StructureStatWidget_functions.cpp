#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StructureStatWidget.StructureStatWidget_C
// (None)

class UClass* UStructureStatWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StructureStatWidget_C");

	return Clss;
}


// StructureStatWidget_C StructureStatWidget.Default__StructureStatWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStructureStatWidget_C* UStructureStatWidget_C::GetDefaultObj()
{
	static class UStructureStatWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStructureStatWidget_C*>(UStructureStatWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StructureStatWidget.StructureStatWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStructureStatWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructureStatWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StructureStatWidget.StructureStatWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)

bool UStructureStatWidget_C::PreConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructureStatWidget_C", "PreConstruct");

	Params::UStructureStatWidget_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StructureStatWidget.StructureStatWidget_C.ExecuteUbergraph_StructureStatWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UStructureStatWidget_C::ExecuteUbergraph_StructureStatWidget(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructureStatWidget_C", "ExecuteUbergraph_StructureStatWidget");

	Params::UStructureStatWidget_C_ExecuteUbergraph_StructureStatWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}

}


