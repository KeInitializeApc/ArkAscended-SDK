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
// struct FVector                     Direction                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              Magnitude                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UFieldSystemComponent::ApplyUniformVectorFalloffForce(bool* Enabled, const struct FVector& Position, float Radius, float Magnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyUniformVectorFalloffForce");

	Params::UFieldSystemComponent_ApplyUniformVectorFalloffForce_Params Parms{};

	Parms.Position = Position;
	Parms.Radius = Radius;
	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

	return Parms.ReturnValue;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              Magnitude                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Iterations                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)

int32 UFieldSystemComponent::ApplyStrainField(bool* Enabled, const struct FVector& Position, float Radius, float Magnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyStrainField");

	Params::UFieldSystemComponent_ApplyStrainField_Params Parms{};

	Parms.Position = Position;
	Parms.Radius = Radius;
	Parms.Magnitude = Magnitude;

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
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UFieldSystemComponent::ApplyStayDynamicField(bool* Enabled, const struct FVector& Position, float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyStayDynamicField");

	Params::UFieldSystemComponent_ApplyStayDynamicField_Params Parms{};

	Parms.Position = Position;
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              Magnitude                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UFieldSystemComponent::ApplyRadialVectorFalloffForce(bool* Enabled, const struct FVector& Position, float Radius, float Magnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyRadialVectorFalloffForce");

	Params::UFieldSystemComponent_ApplyRadialVectorFalloffForce_Params Parms{};

	Parms.Position = Position;
	Parms.Radius = Radius;
	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// float                              Magnitude                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class UFieldSystemMetaData*        MetaData                                                         (Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UFieldNodeBase*              Field                                                            (ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst)

class UFieldNodeBase* UFieldSystemComponent::ApplyPhysicsField(bool* Enabled, enum class EFieldPhysicsType Target)
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

	return Parms.ReturnValue;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Direction                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              Magnitude                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UFieldSystemComponent::ApplyLinearForce(bool* Enabled, float Magnitude)
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

	return Parms.ReturnValue;

}


// Function FieldSystemEngine.FieldSystemComponent.AddPersistentField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// enum class EFieldPhysicsType       Target                                                           (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
// class UFieldSystemMetaData*        MetaData                                                         (Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UFieldNodeBase*              Field                                                            (ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst)

class UFieldNodeBase* UFieldSystemComponent::AddPersistentField(bool* Enabled, enum class EFieldPhysicsType Target)
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

	return Parms.ReturnValue;

}


// Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// enum class EFieldPhysicsType       Target                                                           (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
// class UFieldSystemMetaData*        MetaData                                                         (Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UFieldNodeBase*              Field                                                            (ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst)

class UFieldNodeBase* UFieldSystemComponent::AddFieldCommand(bool* Enabled, enum class EFieldPhysicsType Target)
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
// int32                              Iterations                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UFieldSystemMetaDataIteration*ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UFieldSystemMetaDataIteration::SetMetaDataIteration(class UFieldSystemMetaDataIteration* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemMetaDataIteration", "SetMetaDataIteration");

	Params::UFieldSystemMetaDataIteration_SetMetaDataIteration_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// enum class EFieldResolutionType    ResolutionType                                                   (ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UFieldSystemMetaDataProcessingResolution*ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UFieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType* ResolutionType, class UFieldSystemMetaDataProcessingResolution* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemMetaDataProcessingResolution", "SetMetaDataaProcessingResolutionType");

	Params::UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ResolutionType != nullptr)
		*ResolutionType = Parms.ResolutionType;

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
// enum class EFieldFilterType        FilterType                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// enum class EFieldObjectType        ObjectType                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// enum class EFieldPositionType      PositionType                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class UFieldSystemMetaDataFilter*  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EFieldObjectType UFieldSystemMetaDataFilter::SetMetaDataFilterType(enum class EFieldFilterType* FilterType, enum class EFieldPositionType* PositionType, class UFieldSystemMetaDataFilter* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemMetaDataFilter", "SetMetaDataFilterType");

	Params::UFieldSystemMetaDataFilter_SetMetaDataFilterType_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FilterType != nullptr)
		*FilterType = Parms.FilterType;

	if (PositionType != nullptr)
		*PositionType = Parms.PositionType;

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
// int32                              Magnitude                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UUniformInteger*             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UUniformInteger::SetUniformInteger(int32 Magnitude, class UUniformInteger* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformInteger", "SetUniformInteger");

	Params::UUniformInteger_SetUniformInteger_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// int32                              InteriorValue                                                    (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// int32                              ExteriorValue                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// enum class ESetMaskConditionType   SetMaskConditionIn                                               (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class URadialIntMask*              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void URadialIntMask::SetRadialIntMask(float Radius, const struct FVector& Position, int32* InteriorValue, int32* ExteriorValue, enum class ESetMaskConditionType* SetMaskConditionIn, class URadialIntMask* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialIntMask", "SetRadialIntMask");

	Params::URadialIntMask_SetRadialIntMask_Params Parms{};

	Parms.Radius = Radius;
	Parms.Position = Position;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InteriorValue != nullptr)
		*InteriorValue = Parms.InteriorValue;

	if (ExteriorValue != nullptr)
		*ExteriorValue = Parms.ExteriorValue;

	if (SetMaskConditionIn != nullptr)
		*SetMaskConditionIn = Parms.SetMaskConditionIn;

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
// float                              Magnitude                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UUniformScalar*              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UUniformScalar::SetUniformScalar(float Magnitude, class UUniformScalar* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformScalar", "SetUniformScalar");

	Params::UUniformScalar_SetUniformScalar_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// float                              Magnitude                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// float                              Wavelength                                                       (Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              Period                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
// float                              Time                                                             (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// enum class EWaveFunctionType       Function                                                         (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor)
// enum class EFieldFalloffType       Falloff                                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, DuplicateTransient)
// class UWaveScalar*                 ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EFieldFalloffType UWaveScalar::SetWaveScalar(float Magnitude, const struct FVector& Position, float* Wavelength, float* Period, enum class EWaveFunctionType Function, class UWaveScalar* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaveScalar", "SetWaveScalar");

	Params::UWaveScalar_SetWaveScalar_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.Position = Position;
	Parms.Function = Function;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Wavelength != nullptr)
		*Wavelength = Parms.Wavelength;

	if (Period != nullptr)
		*Period = Parms.Period;

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
// float                              Magnitude                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              MinRange                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              MaxRange                                                         (Edit, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              Default                                                          (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
// float                              Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// enum class EFieldFalloffType       Falloff                                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, DuplicateTransient)
// class URadialFalloff*              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EFieldFalloffType URadialFalloff::SetRadialFalloff(float Magnitude, float* MinRange, float* MaxRange, float Default, float Radius, const struct FVector& Position, class URadialFalloff* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialFalloff", "SetRadialFalloff");

	Params::URadialFalloff_SetRadialFalloff_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.Default = Default;
	Parms.Radius = Radius;
	Parms.Position = Position;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MinRange != nullptr)
		*MinRange = Parms.MinRange;

	if (MaxRange != nullptr)
		*MaxRange = Parms.MaxRange;

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
// float                              Magnitude                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              MinRange                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              MaxRange                                                         (Edit, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              Default                                                          (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
// float                              Distance                                                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// struct FVector                     Normal                                                           (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// enum class EFieldFalloffType       Falloff                                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, DuplicateTransient)
// class UPlaneFalloff*               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EFieldFalloffType UPlaneFalloff::SetPlaneFalloff(float Magnitude, float* MinRange, float* MaxRange, float Default, float* Distance, const struct FVector& Position, class UPlaneFalloff* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlaneFalloff", "SetPlaneFalloff");

	Params::UPlaneFalloff_SetPlaneFalloff_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.Default = Default;
	Parms.Position = Position;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MinRange != nullptr)
		*MinRange = Parms.MinRange;

	if (MaxRange != nullptr)
		*MaxRange = Parms.MaxRange;

	if (Distance != nullptr)
		*Distance = Parms.Distance;

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
// float                              Magnitude                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              MinRange                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              MaxRange                                                         (Edit, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              Default                                                          (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// enum class EFieldFalloffType       Falloff                                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, DuplicateTransient)
// class UBoxFalloff*                 ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EFieldFalloffType UBoxFalloff::SetBoxFalloff(float Magnitude, float* MinRange, float* MaxRange, float Default, struct FTransform* Transform, class UBoxFalloff* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoxFalloff", "SetBoxFalloff");

	Params::UBoxFalloff_SetBoxFalloff_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.Default = Default;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MinRange != nullptr)
		*MinRange = Parms.MinRange;

	if (MaxRange != nullptr)
		*MaxRange = Parms.MaxRange;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

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
// float                              MinRange                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              MaxRange                                                         (Edit, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// class UNoiseField*                 ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UNoiseField::SetNoiseField(float* MinRange, float* MaxRange, struct FTransform* Transform, class UNoiseField* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NoiseField", "SetNoiseField");

	Params::UNoiseField_SetNoiseField_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MinRange != nullptr)
		*MinRange = Parms.MinRange;

	if (MaxRange != nullptr)
		*MaxRange = Parms.MaxRange;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

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
// float                              Magnitude                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Direction                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// class UUniformVector*              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UUniformVector::SetUniformVector(float Magnitude, class UUniformVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformVector", "SetUniformVector");

	Params::UUniformVector_SetUniformVector_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// float                              Magnitude                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// class URadialVector*               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void URadialVector::SetRadialVector(float Magnitude, const struct FVector& Position, class URadialVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialVector", "SetRadialVector");

	Params::URadialVector_SetRadialVector_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.Position = Position;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// float                              Magnitude                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class URandomVector*               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void URandomVector::SetRandomVector(float Magnitude, class URandomVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandomVector", "SetRandomVector");

	Params::URandomVector_SetRandomVector_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// float                              Magnitude                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UFieldNodeBase*              LeftField                                                        (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UFieldNodeBase*              RightField                                                       (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EFieldOperationType     Operation                                                        (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UOperatorField*              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UOperatorField::SetOperatorField(float Magnitude, class UFieldNodeBase** LeftField, class UFieldNodeBase** RightField, enum class EFieldOperationType* Operation, class UOperatorField* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OperatorField", "SetOperatorField");

	Params::UOperatorField_SetOperatorField_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LeftField != nullptr)
		*LeftField = Parms.LeftField;

	if (RightField != nullptr)
		*RightField = Parms.RightField;

	if (Operation != nullptr)
		*Operation = Parms.Operation;

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
// class UFieldNodeFloat*             FloatField                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UToIntegerField*             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UToIntegerField::SetToIntegerField(class UFieldNodeFloat** FloatField, class UToIntegerField* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToIntegerField", "SetToIntegerField");

	Params::UToIntegerField_SetToIntegerField_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FloatField != nullptr)
		*FloatField = Parms.FloatField;

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
// class UFieldNodeInt*               IntegerField                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UToFloatField*               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UToFloatField::SetToFloatField(class UFieldNodeInt** IntegerField, class UToFloatField* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToFloatField", "SetToFloatField");

	Params::UToFloatField_SetToFloatField_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IntegerField != nullptr)
		*IntegerField = Parms.IntegerField;

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
// class UFieldNodeBase*              Culling                                                          (Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UFieldNodeBase*              Field                                                            (ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst)
// enum class EFieldCullingOperationTypeOperation                                                        (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UCullingField*               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UFieldNodeBase* UCullingField::SetCullingField(class UFieldNodeBase** Culling, enum class EFieldCullingOperationType* Operation, class UCullingField* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CullingField", "SetCullingField");

	Params::UCullingField_SetCullingField_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Culling != nullptr)
		*Culling = Parms.Culling;

	if (Operation != nullptr)
		*Operation = Parms.Operation;

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
// class UReturnResultsTerminal*      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UReturnResultsTerminal::SetReturnResultsTerminal(class UReturnResultsTerminal* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReturnResultsTerminal", "SetReturnResultsTerminal");

	Params::UReturnResultsTerminal_SetReturnResultsTerminal_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


