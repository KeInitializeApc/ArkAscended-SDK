#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NinjaLiveInterface.NinjaLiveInterface_C
// (None)

class UClass* INinjaLiveInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NinjaLiveInterface_C");

	return Clss;
}


// NinjaLiveInterface_C NinjaLiveInterface.Default__NinjaLiveInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class INinjaLiveInterface_C* INinjaLiveInterface_C::GetDefaultObj()
{
	static class INinjaLiveInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<INinjaLiveInterface_C*>(INinjaLiveInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NinjaLiveInterface.NinjaLiveInterface_C.LiveFluidParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             BrushSize                                                        (ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void INinjaLiveInterface_C::LiveFluidParams(double BrushSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveInterface_C", "LiveFluidParams");

	Params::INinjaLiveInterface_C_LiveFluidParams_Params Parms{};

	Parms.BrushSize = BrushSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NinjaLiveInterface.NinjaLiveInterface_C.LiveActivation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ParamName                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             FadeTimeOfBrush                                                  (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// double                             FadeTimeOfCanvas                                                 (Edit, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

double INinjaLiveInterface_C::LiveActivation(class FName ParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLiveInterface_C", "LiveActivation");

	Params::INinjaLiveInterface_C_LiveActivation_Params Parms{};

	Parms.ParamName = ParamName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


