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
// struct FIIRInterpolatorVector      Interpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetIIRInterpolatorVector(struct FIIRInterpolatorVector* Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetIIRInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorRotator     Interpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetIIRInterpolatorRotator(struct FIIRInterpolatorRotator* Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetIIRInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorFloat       Interpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetIIRInterpolatorFloat(struct FIIRInterpolatorFloat* Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetIIRInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorVectorInterpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetDoubleIIRInterpolatorVector(struct FDoubleIIRInterpolatorVector* Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetDoubleIIRInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorRotatorInterpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetDoubleIIRInterpolatorRotator(struct FDoubleIIRInterpolatorRotator* Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetDoubleIIRInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorFloat Interpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetDoubleIIRInterpolatorFloat(struct FDoubleIIRInterpolatorFloat* Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetDoubleIIRInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetCritDampedSpringInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCritDampSpringInterpolatorVectorInterpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetCritDampedSpringInterpolatorVector(struct FCritDampSpringInterpolatorVector* Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetCritDampedSpringInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetCritDampedSpringInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCritDampSpringInterpolatorRotatorInterpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetCritDampedSpringInterpolatorRotator(struct FCritDampSpringInterpolatorRotator* Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetCritDampedSpringInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorVectorInterpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetAccelInterpolatorVector(struct FAccelerationInterpolatorVector* Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetAccelInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorRotatorInterpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetAccelInterpolatorRotator(struct FAccelerationInterpolatorRotator* Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetAccelInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorFloatInterpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void USPInterpolatorsBPLibrary::ResetAccelInterpolatorFloat(struct FAccelerationInterpolatorFloat* Interpolator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "ResetAccelInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorVector      Interpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     NewGoal                                                          (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector USPInterpolatorsBPLibrary::EvalIIRInterpolatorVector(struct FIIRInterpolatorVector* Interpolator, struct FVector* NewGoal, float* DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalIIRInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

	if (NewGoal != nullptr)
		*NewGoal = std::move(Parms.NewGoal);

	if (DeltaTime != nullptr)
		*DeltaTime = Parms.DeltaTime;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorRotator     Interpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    NewGoal                                                          (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FRotator USPInterpolatorsBPLibrary::EvalIIRInterpolatorRotator(struct FIIRInterpolatorRotator* Interpolator, struct FRotator* NewGoal, float* DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalIIRInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

	if (NewGoal != nullptr)
		*NewGoal = std::move(Parms.NewGoal);

	if (DeltaTime != nullptr)
		*DeltaTime = Parms.DeltaTime;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FIIRInterpolatorFloat       Interpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              NewGoal                                                          (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float USPInterpolatorsBPLibrary::EvalIIRInterpolatorFloat(struct FIIRInterpolatorFloat* Interpolator, float* NewGoal, float* DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalIIRInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

	if (NewGoal != nullptr)
		*NewGoal = Parms.NewGoal;

	if (DeltaTime != nullptr)
		*DeltaTime = Parms.DeltaTime;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorVectorInterpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     NewGoal                                                          (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector USPInterpolatorsBPLibrary::EvalDoubleIIRInterpolatorVector(struct FDoubleIIRInterpolatorVector* Interpolator, struct FVector* NewGoal, float* DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalDoubleIIRInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

	if (NewGoal != nullptr)
		*NewGoal = std::move(Parms.NewGoal);

	if (DeltaTime != nullptr)
		*DeltaTime = Parms.DeltaTime;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorRotatorInterpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    NewGoal                                                          (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FRotator USPInterpolatorsBPLibrary::EvalDoubleIIRInterpolatorRotator(struct FDoubleIIRInterpolatorRotator* Interpolator, struct FRotator* NewGoal, float* DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalDoubleIIRInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

	if (NewGoal != nullptr)
		*NewGoal = std::move(Parms.NewGoal);

	if (DeltaTime != nullptr)
		*DeltaTime = Parms.DeltaTime;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDoubleIIRInterpolatorFloat Interpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              NewGoal                                                          (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float USPInterpolatorsBPLibrary::EvalDoubleIIRInterpolatorFloat(struct FDoubleIIRInterpolatorFloat* Interpolator, float* NewGoal, float* DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalDoubleIIRInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

	if (NewGoal != nullptr)
		*NewGoal = Parms.NewGoal;

	if (DeltaTime != nullptr)
		*DeltaTime = Parms.DeltaTime;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalCritDampedSpringInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FCritDampSpringInterpolatorVectorInterpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     NewGoal                                                          (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector USPInterpolatorsBPLibrary::EvalCritDampedSpringInterpolatorVector(struct FCritDampSpringInterpolatorVector* Interpolator, struct FVector* NewGoal, float* DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalCritDampedSpringInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

	if (NewGoal != nullptr)
		*NewGoal = std::move(Parms.NewGoal);

	if (DeltaTime != nullptr)
		*DeltaTime = Parms.DeltaTime;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalCritDampedSpringInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FCritDampSpringInterpolatorRotatorInterpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    NewGoal                                                          (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FRotator USPInterpolatorsBPLibrary::EvalCritDampedSpringInterpolatorRotator(struct FCritDampSpringInterpolatorRotator* Interpolator, struct FRotator* NewGoal, float* DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalCritDampedSpringInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

	if (NewGoal != nullptr)
		*NewGoal = std::move(Parms.NewGoal);

	if (DeltaTime != nullptr)
		*DeltaTime = Parms.DeltaTime;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorVectorInterpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     NewGoal                                                          (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector USPInterpolatorsBPLibrary::EvalAccelInterpolatorVector(struct FAccelerationInterpolatorVector* Interpolator, struct FVector* NewGoal, float* DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalAccelInterpolatorVector");

	Params::USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

	if (NewGoal != nullptr)
		*NewGoal = std::move(Parms.NewGoal);

	if (DeltaTime != nullptr)
		*DeltaTime = Parms.DeltaTime;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorRotatorInterpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    NewGoal                                                          (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRotator                    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FRotator USPInterpolatorsBPLibrary::EvalAccelInterpolatorRotator(struct FAccelerationInterpolatorRotator* Interpolator, struct FRotator* NewGoal, float* DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalAccelInterpolatorRotator");

	Params::USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

	if (NewGoal != nullptr)
		*NewGoal = std::move(Parms.NewGoal);

	if (DeltaTime != nullptr)
		*DeltaTime = Parms.DeltaTime;

	return Parms.ReturnValue;

}


// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAccelerationInterpolatorFloatInterpolator                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              NewGoal                                                          (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float USPInterpolatorsBPLibrary::EvalAccelInterpolatorFloat(struct FAccelerationInterpolatorFloat* Interpolator, float* NewGoal, float* DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SPInterpolatorsBPLibrary", "EvalAccelInterpolatorFloat");

	Params::USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interpolator != nullptr)
		*Interpolator = std::move(Parms.Interpolator);

	if (NewGoal != nullptr)
		*NewGoal = Parms.NewGoal;

	if (DeltaTime != nullptr)
		*DeltaTime = Parms.DeltaTime;

	return Parms.ReturnValue;

}

}


