#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FieldSystemEngine.FieldSystemActor
// (Actor)

class UClass* AFieldSystemActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldSystemActor");

	return Clss;
}


// FieldSystemActor FieldSystemEngine.Default__FieldSystemActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AFieldSystemActor* AFieldSystemActor::GetDefaultObj()
{
	static class AFieldSystemActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AFieldSystemActor*>(AFieldSystemActor::StaticClass()->DefaultObject);

	return Default;
}


// Class FieldSystemEngine.FieldSystem
// (None)

class UClass* UFieldSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldSystem");

	return Clss;
}


// FieldSystem FieldSystemEngine.Default__FieldSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UFieldSystem* UFieldSystem::GetDefaultObj()
{
	static class UFieldSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldSystem*>(UFieldSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class FieldSystemEngine.FieldSystemComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UFieldSystemComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldSystemComponent");

	return Clss;
}


// FieldSystemComponent FieldSystemEngine.Default__FieldSystemComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFieldSystemComponent* UFieldSystemComponent::GetDefaultObj()
{
	static class UFieldSystemComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldSystemComponent*>(UFieldSystemComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFieldSystemComponent::ResetFieldSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ResetFieldSystem");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FieldSystemEngine.FieldSystemComponent.RemovePersistentFields
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFieldSystemComponent::RemovePersistentFields()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "RemovePersistentFields");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// struct FVector                     Direction                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// float                              Radius                                                           (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              Magnitude                                                        (ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UFieldSystemComponent::ApplyUniformVectorFalloffForce(bool* Enabled, const struct FVector& Position, struct FVector* Direction, float Magnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyUniformVectorFalloffForce");

	Params::UFieldSystemComponent_ApplyUniformVectorFalloffForce_Params Parms{};

	Parms.Position = Position;
	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);

	return Parms.ReturnValue;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// float                              Radius                                                           (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              Magnitude                                                        (ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Iterations                                                       (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

float UFieldSystemComponent::ApplyStrainField(bool* Enabled, const struct FVector& Position, float Magnitude, int32 Iterations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyStrainField");

	Params::UFieldSystemComponent_ApplyStrainField_Params Parms{};

	Parms.Position = Position;
	Parms.Magnitude = Magnitude;
	Parms.Iterations = Iterations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

	return Parms.ReturnValue;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// float                              Radius                                                           (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

float UFieldSystemComponent::ApplyStayDynamicField(bool* Enabled, const struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyStayDynamicField");

	Params::UFieldSystemComponent_ApplyStayDynamicField_Params Parms{};

	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

	return Parms.ReturnValue;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// float                              Radius                                                           (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              Magnitude                                                        (ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UFieldSystemComponent::ApplyRadialVectorFalloffForce(bool* Enabled, const struct FVector& Position, float Magnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyRadialVectorFalloffForce");

	Params::UFieldSystemComponent_ApplyRadialVectorFalloffForce_Params Parms{};

	Parms.Position = Position;
	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

	return Parms.ReturnValue;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// float                              Magnitude                                                        (ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UFieldSystemComponent::ApplyRadialForce(bool* Enabled, const struct FVector& Position, float Magnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyRadialForce");

	Params::UFieldSystemComponent_ApplyRadialForce_Params Parms{};

	Parms.Position = Position;
	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// enum class EFieldPhysicsType       Target                                                           (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
// class UFieldSystemMetaData*        MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class UFieldNodeBase*              Field                                                            (ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst)

class UFieldNodeBase* UFieldSystemComponent::ApplyPhysicsField(bool* Enabled, enum class EFieldPhysicsType Target, class UFieldSystemMetaData** MetaData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyPhysicsField");

	Params::UFieldSystemComponent_ApplyPhysicsField_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Direction                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// float                              Magnitude                                                        (ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UFieldSystemComponent::ApplyLinearForce(bool* Enabled, struct FVector* Direction, float Magnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyLinearForce");

	Params::UFieldSystemComponent_ApplyLinearForce_Params Parms{};

	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);

}


// Function FieldSystemEngine.FieldSystemComponent.AddPersistentField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// enum class EFieldPhysicsType       Target                                                           (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
// class UFieldSystemMetaData*        MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class UFieldNodeBase*              Field                                                            (ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst)

class UFieldNodeBase* UFieldSystemComponent::AddPersistentField(bool* Enabled, enum class EFieldPhysicsType Target, class UFieldSystemMetaData** MetaData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "AddPersistentField");

	Params::UFieldSystemComponent_AddPersistentField_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// enum class EFieldPhysicsType       Target                                                           (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
// class UFieldSystemMetaData*        MetaData                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
// class UFieldNodeBase*              Field                                                            (ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst)

class UFieldNodeBase* UFieldSystemComponent::AddFieldCommand(bool* Enabled, enum class EFieldPhysicsType Target, class UFieldSystemMetaData** MetaData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "AddFieldCommand");

	Params::UFieldSystemComponent_AddFieldCommand_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

	return Parms.ReturnValue;

}


// Class FieldSystemEngine.FieldSystemMetaData
// (None)

class UClass* UFieldSystemMetaData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldSystemMetaData");

	return Clss;
}


// FieldSystemMetaData FieldSystemEngine.Default__FieldSystemMetaData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFieldSystemMetaData* UFieldSystemMetaData::GetDefaultObj()
{
	static class UFieldSystemMetaData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldSystemMetaData*>(UFieldSystemMetaData::StaticClass()->DefaultObject);

	return Default;
}


// Class FieldSystemEngine.FieldSystemMetaDataIteration
// (None)

class UClass* UFieldSystemMetaDataIteration::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldSystemMetaDataIteration");

	return Clss;
}


// FieldSystemMetaDataIteration FieldSystemEngine.Default__FieldSystemMetaDataIteration
// (Public, ClassDefaultObject, ArchetypeObject)

class UFieldSystemMetaDataIteration* UFieldSystemMetaDataIteration::GetDefaultObj()
{
	static class UFieldSystemMetaDataIteration* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldSystemMetaDataIteration*>(UFieldSystemMetaDataIteration::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Iterations                                                       (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UFieldSystemMetaDataIteration*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UFieldSystemMetaDataIteration* UFieldSystemMetaDataIteration::SetMetaDataIteration(int32 Iterations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemMetaDataIteration", "SetMetaDataIteration");

	Params::UFieldSystemMetaDataIteration_SetMetaDataIteration_Params Parms{};

	Parms.Iterations = Iterations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// (None)

class UClass* UFieldSystemMetaDataProcessingResolution::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldSystemMetaDataProcessingResolution");

	return Clss;
}


// FieldSystemMetaDataProcessingResolution FieldSystemEngine.Default__FieldSystemMetaDataProcessingResolution
// (Public, ClassDefaultObject, ArchetypeObject)

class UFieldSystemMetaDataProcessingResolution* UFieldSystemMetaDataProcessingResolution::GetDefaultObj()
{
	static class UFieldSystemMetaDataProcessingResolution* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldSystemMetaDataProcessingResolution*>(UFieldSystemMetaDataProcessingResolution::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EFieldResolutionType    ResolutionType                                                   (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UFieldSystemMetaDataProcessingResolution*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UFieldSystemMetaDataProcessingResolution* UFieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType* ResolutionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemMetaDataProcessingResolution", "SetMetaDataaProcessingResolutionType");

	Params::UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ResolutionType != nullptr)
		*ResolutionType = Parms.ResolutionType;

	return Parms.ReturnValue;

}


// Class FieldSystemEngine.FieldSystemMetaDataFilter
// (None)

class UClass* UFieldSystemMetaDataFilter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldSystemMetaDataFilter");

	return Clss;
}


// FieldSystemMetaDataFilter FieldSystemEngine.Default__FieldSystemMetaDataFilter
// (Public, ClassDefaultObject, ArchetypeObject)

class UFieldSystemMetaDataFilter* UFieldSystemMetaDataFilter::GetDefaultObj()
{
	static class UFieldSystemMetaDataFilter* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldSystemMetaDataFilter*>(UFieldSystemMetaDataFilter::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EFieldFilterType        FilterType                                                       (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// enum class EFieldObjectType        ObjectType                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// enum class EFieldPositionType      PositionType                                                     (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UFieldSystemMetaDataFilter*  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UFieldSystemMetaDataFilter* UFieldSystemMetaDataFilter::SetMetaDataFilterType(enum class EFieldObjectType ObjectType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemMetaDataFilter", "SetMetaDataFilterType");

	Params::UFieldSystemMetaDataFilter_SetMetaDataFilterType_Params Parms{};

	Parms.ObjectType = ObjectType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FieldSystemEngine.FieldNodeBase
// (None)

class UClass* UFieldNodeBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldNodeBase");

	return Clss;
}


// FieldNodeBase FieldSystemEngine.Default__FieldNodeBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFieldNodeBase* UFieldNodeBase::GetDefaultObj()
{
	static class UFieldNodeBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldNodeBase*>(UFieldNodeBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FieldSystemEngine.FieldNodeInt
// (None)

class UClass* UFieldNodeInt::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldNodeInt");

	return Clss;
}


// FieldNodeInt FieldSystemEngine.Default__FieldNodeInt
// (Public, ClassDefaultObject, ArchetypeObject)

class UFieldNodeInt* UFieldNodeInt::GetDefaultObj()
{
	static class UFieldNodeInt* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldNodeInt*>(UFieldNodeInt::StaticClass()->DefaultObject);

	return Default;
}


// Class FieldSystemEngine.FieldNodeFloat
// (None)

class UClass* UFieldNodeFloat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldNodeFloat");

	return Clss;
}


// FieldNodeFloat FieldSystemEngine.Default__FieldNodeFloat
// (Public, ClassDefaultObject, ArchetypeObject)

class UFieldNodeFloat* UFieldNodeFloat::GetDefaultObj()
{
	static class UFieldNodeFloat* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldNodeFloat*>(UFieldNodeFloat::StaticClass()->DefaultObject);

	return Default;
}


// Class FieldSystemEngine.FieldNodeVector
// (None)

class UClass* UFieldNodeVector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldNodeVector");

	return Clss;
}


// FieldNodeVector FieldSystemEngine.Default__FieldNodeVector
// (Public, ClassDefaultObject, ArchetypeObject)

class UFieldNodeVector* UFieldNodeVector::GetDefaultObj()
{
	static class UFieldNodeVector* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldNodeVector*>(UFieldNodeVector::StaticClass()->DefaultObject);

	return Default;
}


// Class FieldSystemEngine.UniformInteger
// (None)

class UClass* UUniformInteger::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UniformInteger");

	return Clss;
}


// UniformInteger FieldSystemEngine.Default__UniformInteger
// (Public, ClassDefaultObject, ArchetypeObject)

class UUniformInteger* UUniformInteger::GetDefaultObj()
{
	static class UUniformInteger* Default = nullptr;

	if (!Default)
		Default = static_cast<UUniformInteger*>(UUniformInteger::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.UniformInteger.SetUniformInteger
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Magnitude                                                        (ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UUniformInteger*             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UUniformInteger* UUniformInteger::SetUniformInteger(int32 Magnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformInteger", "SetUniformInteger");

	Params::UUniformInteger_SetUniformInteger_Params Parms{};

	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FieldSystemEngine.RadialIntMask
// (None)

class UClass* URadialIntMask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadialIntMask");

	return Clss;
}


// RadialIntMask FieldSystemEngine.Default__RadialIntMask
// (Public, ClassDefaultObject, ArchetypeObject)

class URadialIntMask* URadialIntMask::GetDefaultObj()
{
	static class URadialIntMask* Default = nullptr;

	if (!Default)
		Default = static_cast<URadialIntMask*>(URadialIntMask::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Radius                                                           (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// int32                              InteriorValue                                                    (ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// int32                              ExteriorValue                                                    (ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// enum class ESetMaskConditionType   SetMaskConditionIn                                               (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class URadialIntMask*              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class URadialIntMask* URadialIntMask::SetRadialIntMask(const struct FVector& Position, enum class ESetMaskConditionType* SetMaskConditionIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialIntMask", "SetRadialIntMask");

	Params::URadialIntMask_SetRadialIntMask_Params Parms{};

	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SetMaskConditionIn != nullptr)
		*SetMaskConditionIn = Parms.SetMaskConditionIn;

	return Parms.ReturnValue;

}


// Class FieldSystemEngine.UniformScalar
// (None)

class UClass* UUniformScalar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UniformScalar");

	return Clss;
}


// UniformScalar FieldSystemEngine.Default__UniformScalar
// (Public, ClassDefaultObject, ArchetypeObject)

class UUniformScalar* UUniformScalar::GetDefaultObj()
{
	static class UUniformScalar* Default = nullptr;

	if (!Default)
		Default = static_cast<UUniformScalar*>(UUniformScalar::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.UniformScalar.SetUniformScalar
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Magnitude                                                        (ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UUniformScalar*              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UUniformScalar* UUniformScalar::SetUniformScalar(float Magnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformScalar", "SetUniformScalar");

	Params::UUniformScalar_SetUniformScalar_Params Parms{};

	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FieldSystemEngine.WaveScalar
// (None)

class UClass* UWaveScalar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaveScalar");

	return Clss;
}


// WaveScalar FieldSystemEngine.Default__WaveScalar
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaveScalar* UWaveScalar::GetDefaultObj()
{
	static class UWaveScalar* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaveScalar*>(UWaveScalar::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.WaveScalar.SetWaveScalar
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Magnitude                                                        (ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// float                              Wavelength                                                       (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              Period                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
// float                              Time                                                             (Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// enum class EWaveFunctionType       Function                                                         (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor)
// enum class EFieldFalloffType       Falloff                                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
// class UWaveScalar*                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWaveScalar* UWaveScalar::SetWaveScalar(float Magnitude, const struct FVector& Position, float* Period, float Time, enum class EWaveFunctionType Function, enum class EFieldFalloffType* Falloff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaveScalar", "SetWaveScalar");

	Params::UWaveScalar_SetWaveScalar_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.Position = Position;
	Parms.Time = Time;
	Parms.Function = Function;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Period != nullptr)
		*Period = Parms.Period;

	if (Falloff != nullptr)
		*Falloff = Parms.Falloff;

	return Parms.ReturnValue;

}


// Class FieldSystemEngine.RadialFalloff
// (None)

class UClass* URadialFalloff::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadialFalloff");

	return Clss;
}


// RadialFalloff FieldSystemEngine.Default__RadialFalloff
// (Public, ClassDefaultObject, ArchetypeObject)

class URadialFalloff* URadialFalloff::GetDefaultObj()
{
	static class URadialFalloff* Default = nullptr;

	if (!Default)
		Default = static_cast<URadialFalloff*>(URadialFalloff::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Magnitude                                                        (ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              MinRange                                                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              MaxRange                                                         (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              Default                                                          (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
// float                              Radius                                                           (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// enum class EFieldFalloffType       Falloff                                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
// class URadialFalloff*              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class URadialFalloff* URadialFalloff::SetRadialFalloff(float Magnitude, float Default, const struct FVector& Position, enum class EFieldFalloffType* Falloff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialFalloff", "SetRadialFalloff");

	Params::URadialFalloff_SetRadialFalloff_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.Default = Default;
	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Falloff != nullptr)
		*Falloff = Parms.Falloff;

	return Parms.ReturnValue;

}


// Class FieldSystemEngine.PlaneFalloff
// (None)

class UClass* UPlaneFalloff::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlaneFalloff");

	return Clss;
}


// PlaneFalloff FieldSystemEngine.Default__PlaneFalloff
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlaneFalloff* UPlaneFalloff::GetDefaultObj()
{
	static class UPlaneFalloff* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlaneFalloff*>(UPlaneFalloff::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Magnitude                                                        (ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              MinRange                                                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              MaxRange                                                         (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              Default                                                          (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
// float                              Distance                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// struct FVector                     Normal                                                           (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// enum class EFieldFalloffType       Falloff                                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
// class UPlaneFalloff*               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UPlaneFalloff* UPlaneFalloff::SetPlaneFalloff(float Magnitude, float Default, const struct FVector& Position, enum class EFieldFalloffType* Falloff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlaneFalloff", "SetPlaneFalloff");

	Params::UPlaneFalloff_SetPlaneFalloff_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.Default = Default;
	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Falloff != nullptr)
		*Falloff = Parms.Falloff;

	return Parms.ReturnValue;

}


// Class FieldSystemEngine.BoxFalloff
// (None)

class UClass* UBoxFalloff::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BoxFalloff");

	return Clss;
}


// BoxFalloff FieldSystemEngine.Default__BoxFalloff
// (Public, ClassDefaultObject, ArchetypeObject)

class UBoxFalloff* UBoxFalloff::GetDefaultObj()
{
	static class UBoxFalloff* Default = nullptr;

	if (!Default)
		Default = static_cast<UBoxFalloff*>(UBoxFalloff::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Magnitude                                                        (ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              MinRange                                                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              MaxRange                                                         (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              Default                                                          (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// enum class EFieldFalloffType       Falloff                                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
// class UBoxFalloff*                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UBoxFalloff* UBoxFalloff::SetBoxFalloff(float Magnitude, float Default, struct FTransform* Transform, enum class EFieldFalloffType* Falloff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoxFalloff", "SetBoxFalloff");

	Params::UBoxFalloff_SetBoxFalloff_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.Default = Default;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	if (Falloff != nullptr)
		*Falloff = Parms.Falloff;

	return Parms.ReturnValue;

}


// Class FieldSystemEngine.NoiseField
// (None)

class UClass* UNoiseField::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NoiseField");

	return Clss;
}


// NoiseField FieldSystemEngine.Default__NoiseField
// (Public, ClassDefaultObject, ArchetypeObject)

class UNoiseField* UNoiseField::GetDefaultObj()
{
	static class UNoiseField* Default = nullptr;

	if (!Default)
		Default = static_cast<UNoiseField*>(UNoiseField::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.NoiseField.SetNoiseField
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              MinRange                                                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              MaxRange                                                         (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// class UNoiseField*                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UNoiseField* UNoiseField::SetNoiseField(struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NoiseField", "SetNoiseField");

	Params::UNoiseField_SetNoiseField_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Class FieldSystemEngine.UniformVector
// (None)

class UClass* UUniformVector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UniformVector");

	return Clss;
}


// UniformVector FieldSystemEngine.Default__UniformVector
// (Public, ClassDefaultObject, ArchetypeObject)

class UUniformVector* UUniformVector::GetDefaultObj()
{
	static class UUniformVector* Default = nullptr;

	if (!Default)
		Default = static_cast<UUniformVector*>(UUniformVector::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.UniformVector.SetUniformVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Magnitude                                                        (ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Direction                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// class UUniformVector*              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UUniformVector* UUniformVector::SetUniformVector(float Magnitude, struct FVector* Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformVector", "SetUniformVector");

	Params::UUniformVector_SetUniformVector_Params Parms{};

	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);

	return Parms.ReturnValue;

}


// Class FieldSystemEngine.RadialVector
// (None)

class UClass* URadialVector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadialVector");

	return Clss;
}


// RadialVector FieldSystemEngine.Default__RadialVector
// (Public, ClassDefaultObject, ArchetypeObject)

class URadialVector* URadialVector::GetDefaultObj()
{
	static class URadialVector* Default = nullptr;

	if (!Default)
		Default = static_cast<URadialVector*>(URadialVector::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.RadialVector.SetRadialVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Magnitude                                                        (ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// class URadialVector*               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class URadialVector* URadialVector::SetRadialVector(float Magnitude, const struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialVector", "SetRadialVector");

	Params::URadialVector_SetRadialVector_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FieldSystemEngine.RandomVector
// (None)

class UClass* URandomVector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RandomVector");

	return Clss;
}


// RandomVector FieldSystemEngine.Default__RandomVector
// (Public, ClassDefaultObject, ArchetypeObject)

class URandomVector* URandomVector::GetDefaultObj()
{
	static class URandomVector* Default = nullptr;

	if (!Default)
		Default = static_cast<URandomVector*>(URandomVector::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.RandomVector.SetRandomVector
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Magnitude                                                        (ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class URandomVector*               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class URandomVector* URandomVector::SetRandomVector(float Magnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandomVector", "SetRandomVector");

	Params::URandomVector_SetRandomVector_Params Parms{};

	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FieldSystemEngine.OperatorField
// (None)

class UClass* UOperatorField::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OperatorField");

	return Clss;
}


// OperatorField FieldSystemEngine.Default__OperatorField
// (Public, ClassDefaultObject, ArchetypeObject)

class UOperatorField* UOperatorField::GetDefaultObj()
{
	static class UOperatorField* Default = nullptr;

	if (!Default)
		Default = static_cast<UOperatorField*>(UOperatorField::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.OperatorField.SetOperatorField
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Magnitude                                                        (ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UFieldNodeBase*              LeftField                                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UFieldNodeBase*              RightField                                                       (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EFieldOperationType     Operation                                                        (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UOperatorField*              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UOperatorField* UOperatorField::SetOperatorField(float Magnitude, class UFieldNodeBase** LeftField, class UFieldNodeBase** RightField)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OperatorField", "SetOperatorField");

	Params::UOperatorField_SetOperatorField_Params Parms{};

	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LeftField != nullptr)
		*LeftField = Parms.LeftField;

	if (RightField != nullptr)
		*RightField = Parms.RightField;

	return Parms.ReturnValue;

}


// Class FieldSystemEngine.ToIntegerField
// (None)

class UClass* UToIntegerField::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToIntegerField");

	return Clss;
}


// ToIntegerField FieldSystemEngine.Default__ToIntegerField
// (Public, ClassDefaultObject, ArchetypeObject)

class UToIntegerField* UToIntegerField::GetDefaultObj()
{
	static class UToIntegerField* Default = nullptr;

	if (!Default)
		Default = static_cast<UToIntegerField*>(UToIntegerField::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.ToIntegerField.SetToIntegerField
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFieldNodeFloat*             FloatField                                                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UToIntegerField*             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UToIntegerField* UToIntegerField::SetToIntegerField(class UFieldNodeFloat** FloatField)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToIntegerField", "SetToIntegerField");

	Params::UToIntegerField_SetToIntegerField_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FloatField != nullptr)
		*FloatField = Parms.FloatField;

	return Parms.ReturnValue;

}


// Class FieldSystemEngine.ToFloatField
// (None)

class UClass* UToFloatField::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToFloatField");

	return Clss;
}


// ToFloatField FieldSystemEngine.Default__ToFloatField
// (Public, ClassDefaultObject, ArchetypeObject)

class UToFloatField* UToFloatField::GetDefaultObj()
{
	static class UToFloatField* Default = nullptr;

	if (!Default)
		Default = static_cast<UToFloatField*>(UToFloatField::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.ToFloatField.SetToFloatField
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFieldNodeInt*               IntegerField                                                     (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UToFloatField*               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UToFloatField* UToFloatField::SetToFloatField(class UFieldNodeInt** IntegerField)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToFloatField", "SetToFloatField");

	Params::UToFloatField_SetToFloatField_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IntegerField != nullptr)
		*IntegerField = Parms.IntegerField;

	return Parms.ReturnValue;

}


// Class FieldSystemEngine.CullingField
// (None)

class UClass* UCullingField::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CullingField");

	return Clss;
}


// CullingField FieldSystemEngine.Default__CullingField
// (Public, ClassDefaultObject, ArchetypeObject)

class UCullingField* UCullingField::GetDefaultObj()
{
	static class UCullingField* Default = nullptr;

	if (!Default)
		Default = static_cast<UCullingField*>(UCullingField::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.CullingField.SetCullingField
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFieldNodeBase*              Culling                                                          (BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UFieldNodeBase*              Field                                                            (ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst)
// enum class EFieldCullingOperationTypeOperation                                                        (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UCullingField*               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UCullingField* UCullingField::SetCullingField()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CullingField", "SetCullingField");

	Params::UCullingField_SetCullingField_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FieldSystemEngine.ReturnResultsTerminal
// (None)

class UClass* UReturnResultsTerminal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReturnResultsTerminal");

	return Clss;
}


// ReturnResultsTerminal FieldSystemEngine.Default__ReturnResultsTerminal
// (Public, ClassDefaultObject, ArchetypeObject)

class UReturnResultsTerminal* UReturnResultsTerminal::GetDefaultObj()
{
	static class UReturnResultsTerminal* Default = nullptr;

	if (!Default)
		Default = static_cast<UReturnResultsTerminal*>(UReturnResultsTerminal::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UReturnResultsTerminal*      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UReturnResultsTerminal* UReturnResultsTerminal::SetReturnResultsTerminal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReturnResultsTerminal", "SetReturnResultsTerminal");

	Params::UReturnResultsTerminal_SetReturnResultsTerminal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


