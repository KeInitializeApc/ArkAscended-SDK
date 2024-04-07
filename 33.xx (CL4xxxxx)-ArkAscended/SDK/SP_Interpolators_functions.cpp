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
// struct FIIRInterpolatorVector      Interpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetIIRInterpolatorVector(const struct FIIRInterpolatorVector& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetIIRInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorRotator     Interpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetIIRInterpolatorRotator(const struct FIIRInterpolatorRotator& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetIIRInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorFloat       Interpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetIIRInterpolatorFloat(const struct FIIRInterpolatorFloat& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetIIRInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorVectorInterpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetDoubleIIRInterpolatorVector(const struct FDoubleIIRInterpolatorVector& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetDoubleIIRInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorRotatorInterpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetDoubleIIRInterpolatorRotator(const struct FDoubleIIRInterpolatorRotator& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetDoubleIIRInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorFloat Interpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetDoubleIIRInterpolatorFloat(const struct FDoubleIIRInterpolatorFloat& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetDoubleIIRInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetCritDampedSpringInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCritDampSpringInterpolatorVectorInterpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetCritDampedSpringInterpolatorVector(const struct FCritDampSpringInterpolatorVector& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetCritDampedSpringInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetCritDampedSpringInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCritDampSpringInterpolatorRotatorInterpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetCritDampedSpringInterpolatorRotator(const struct FCritDampSpringInterpolatorRotator& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetCritDampedSpringInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorVectorInterpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetAccelInterpolatorVector(const struct FAccelerationInterpolatorVector& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetAccelInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorRotatorInterpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetAccelInterpolatorRotator(const struct FAccelerationInterpolatorRotator& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetAccelInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorFloatInterpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetAccelInterpolatorFloat(const struct FAccelerationInterpolatorFloat& Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetAccelInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat_Params Parms{};

	Parms.Interpolator = Interpolator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorVector      Interpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     NewGoal                                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector USPInterpolatorsBPLibrary::EvalIIRInterpolatorVector(const struct FIIRInterpolatorVector& Interpolator, const struct FVector& NewGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalIIRInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorRotator     Interpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRotator                    NewGoal                                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRotator USPInterpolatorsBPLibrary::EvalIIRInterpolatorRotator(const struct FIIRInterpolatorRotator& Interpolator, const struct FRotator& NewGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalIIRInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorFloat       Interpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              NewGoal                                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USPInterpolatorsBPLibrary::EvalIIRInterpolatorFloat(const struct FIIRInterpolatorFloat& Interpolator, float NewGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalIIRInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorVectorInterpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     NewGoal                                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector USPInterpolatorsBPLibrary::EvalDoubleIIRInterpolatorVector(const struct FDoubleIIRInterpolatorVector& Interpolator, const struct FVector& NewGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalDoubleIIRInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorRotatorInterpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRotator                    NewGoal                                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRotator USPInterpolatorsBPLibrary::EvalDoubleIIRInterpolatorRotator(const struct FDoubleIIRInterpolatorRotator& Interpolator, const struct FRotator& NewGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalDoubleIIRInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorFloat Interpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              NewGoal                                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USPInterpolatorsBPLibrary::EvalDoubleIIRInterpolatorFloat(const struct FDoubleIIRInterpolatorFloat& Interpolator, float NewGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalDoubleIIRInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalCritDampedSpringInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FCritDampSpringInterpolatorVectorInterpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     NewGoal                                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector USPInterpolatorsBPLibrary::EvalCritDampedSpringInterpolatorVector(const struct FCritDampSpringInterpolatorVector& Interpolator, const struct FVector& NewGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalCritDampedSpringInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalCritDampedSpringInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FCritDampSpringInterpolatorRotatorInterpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRotator                    NewGoal                                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRotator USPInterpolatorsBPLibrary::EvalCritDampedSpringInterpolatorRotator(const struct FCritDampSpringInterpolatorRotator& Interpolator, const struct FRotator& NewGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalCritDampedSpringInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorVectorInterpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     NewGoal                                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector USPInterpolatorsBPLibrary::EvalAccelInterpolatorVector(const struct FAccelerationInterpolatorVector& Interpolator, const struct FVector& NewGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalAccelInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorRotatorInterpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRotator                    NewGoal                                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRotator USPInterpolatorsBPLibrary::EvalAccelInterpolatorRotator(const struct FAccelerationInterpolatorRotator& Interpolator, const struct FRotator& NewGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalAccelInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorFloatInterpolator                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              NewGoal                                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USPInterpolatorsBPLibrary::EvalAccelInterpolatorFloat(const struct FAccelerationInterpolatorFloat& Interpolator, float NewGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalAccelInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Params Parms{};

	Parms.Interpolator = Interpolator;
	Parms.NewGoal = NewGoal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


