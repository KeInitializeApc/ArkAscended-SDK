#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SP_Interpolators.SPInterpolatorsBPLibrary
// (None)

class UClass* USPInterpolatorsBPLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SPInterpolatorsBPLibrary");

	return Clss;
}


// SPInterpolatorsBPLibrary SP_Interpolators.Default__SPInterpolatorsBPLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USPInterpolatorsBPLibrary* USPInterpolatorsBPLibrary::GetDefaultObj()
{
	static class USPInterpolatorsBPLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USPInterpolatorsBPLibrary*>(USPInterpolatorsBPLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorVector      Interpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

struct FIIRInterpolatorVector USPInterpolatorsBPLibrary::ResetIIRInterpolatorVector()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetIIRInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorRotator     Interpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

struct FIIRInterpolatorRotator USPInterpolatorsBPLibrary::ResetIIRInterpolatorRotator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetIIRInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorFloat       Interpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

struct FIIRInterpolatorFloat USPInterpolatorsBPLibrary::ResetIIRInterpolatorFloat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetIIRInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorVectorInterpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

struct FDoubleIIRInterpolatorVector USPInterpolatorsBPLibrary::ResetDoubleIIRInterpolatorVector()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetDoubleIIRInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorRotatorInterpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

struct FDoubleIIRInterpolatorRotator USPInterpolatorsBPLibrary::ResetDoubleIIRInterpolatorRotator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetDoubleIIRInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorFloat Interpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

struct FDoubleIIRInterpolatorFloat USPInterpolatorsBPLibrary::ResetDoubleIIRInterpolatorFloat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetDoubleIIRInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetCritDampedSpringInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCritDampSpringInterpolatorVectorInterpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

struct FCritDampSpringInterpolatorVector USPInterpolatorsBPLibrary::ResetCritDampedSpringInterpolatorVector()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetCritDampedSpringInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetCritDampedSpringInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCritDampSpringInterpolatorRotatorInterpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

struct FCritDampSpringInterpolatorRotator USPInterpolatorsBPLibrary::ResetCritDampedSpringInterpolatorRotator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetCritDampedSpringInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorVectorInterpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

struct FAccelerationInterpolatorVector USPInterpolatorsBPLibrary::ResetAccelInterpolatorVector()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetAccelInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorRotatorInterpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

struct FAccelerationInterpolatorRotator USPInterpolatorsBPLibrary::ResetAccelInterpolatorRotator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetAccelInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorFloatInterpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

struct FAccelerationInterpolatorFloat USPInterpolatorsBPLibrary::ResetAccelInterpolatorFloat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetAccelInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorVector      Interpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     NewGoal                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USPInterpolatorsBPLibrary::EvalIIRInterpolatorVector(struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalIIRInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorRotator     Interpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    NewGoal                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USPInterpolatorsBPLibrary::EvalIIRInterpolatorRotator(struct FRotator* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalIIRInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorFloat       Interpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              NewGoal                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USPInterpolatorsBPLibrary::EvalIIRInterpolatorFloat(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalIIRInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorVectorInterpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     NewGoal                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USPInterpolatorsBPLibrary::EvalDoubleIIRInterpolatorVector(struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalDoubleIIRInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorRotatorInterpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    NewGoal                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USPInterpolatorsBPLibrary::EvalDoubleIIRInterpolatorRotator(struct FRotator* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalDoubleIIRInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorFloat Interpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              NewGoal                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USPInterpolatorsBPLibrary::EvalDoubleIIRInterpolatorFloat(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalDoubleIIRInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalCritDampedSpringInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FCritDampSpringInterpolatorVectorInterpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     NewGoal                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USPInterpolatorsBPLibrary::EvalCritDampedSpringInterpolatorVector(struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalCritDampedSpringInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalCritDampedSpringInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FCritDampSpringInterpolatorRotatorInterpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    NewGoal                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USPInterpolatorsBPLibrary::EvalCritDampedSpringInterpolatorRotator(struct FRotator* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalCritDampedSpringInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorVectorInterpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     NewGoal                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USPInterpolatorsBPLibrary::EvalAccelInterpolatorVector(struct FVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalAccelInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorRotatorInterpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    NewGoal                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USPInterpolatorsBPLibrary::EvalAccelInterpolatorRotator(struct FRotator* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalAccelInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorFloatInterpolator                                                     (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              NewGoal                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USPInterpolatorsBPLibrary::EvalAccelInterpolatorFloat(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalAccelInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}

}


