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
// bool                               Enabled                                                          (Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Position                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
// struct FVector                     Direction                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              Radius                                                           (ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              Magnitude                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)

float UFieldSystemComponent::ApplyUniformVectorFalloffForce(struct FVector* Position, float* Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyUniformVectorFalloffForce");

	Params::UFieldSystemComponent_ApplyUniformVectorFalloffForce_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

	return Parms.ReturnValue;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Position                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
// float                              Radius                                                           (ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              Magnitude                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// int32                              Iterations                                                       (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

int32 UFieldSystemComponent::ApplyStrainField(struct FVector* Position, float* Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyStrainField");

	Params::UFieldSystemComponent_ApplyStrainField_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

	return Parms.ReturnValue;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Position                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
// float                              Radius                                                           (ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UFieldSystemComponent::ApplyStayDynamicField(struct FVector* Position, float* Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyStayDynamicField");

	Params::UFieldSystemComponent_ApplyStayDynamicField_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

	return Parms.ReturnValue;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Position                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
// float                              Radius                                                           (ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              Magnitude                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)

float UFieldSystemComponent::ApplyRadialVectorFalloffForce(struct FVector* Position, float* Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyRadialVectorFalloffForce");

	Params::UFieldSystemComponent_ApplyRadialVectorFalloffForce_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

	return Parms.ReturnValue;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Position                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
// float                              Magnitude                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)

float UFieldSystemComponent::ApplyRadialForce(struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyRadialForce");

	Params::UFieldSystemComponent_ApplyRadialForce_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	return Parms.ReturnValue;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// enum class EFieldPhysicsType       Target                                                           (Edit, ConstParm, ReturnParm, Transient, Config)
// class UFieldSystemMetaData*        MetaData                                                         (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class UFieldNodeBase*              Field                                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

class UFieldSystemMetaData* UFieldSystemComponent::ApplyPhysicsField(class UFieldNodeBase* Field)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyPhysicsField");

	Params::UFieldSystemComponent_ApplyPhysicsField_Params Parms{};

	Parms.Field = Field;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Direction                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              Magnitude                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)

float UFieldSystemComponent::ApplyLinearForce()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyLinearForce");

	Params::UFieldSystemComponent_ApplyLinearForce_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FieldSystemEngine.FieldSystemComponent.AddPersistentField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// enum class EFieldPhysicsType       Target                                                           (Edit, ConstParm, ReturnParm, Transient, Config)
// class UFieldSystemMetaData*        MetaData                                                         (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class UFieldNodeBase*              Field                                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

class UFieldSystemMetaData* UFieldSystemComponent::AddPersistentField(class UFieldNodeBase* Field)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "AddPersistentField");

	Params::UFieldSystemComponent_AddPersistentField_Params Parms{};

	Parms.Field = Field;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// enum class EFieldPhysicsType       Target                                                           (Edit, ConstParm, ReturnParm, Transient, Config)
// class UFieldSystemMetaData*        MetaData                                                         (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class UFieldNodeBase*              Field                                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

class UFieldSystemMetaData* UFieldSystemComponent::AddFieldCommand(class UFieldNodeBase* Field)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "AddFieldCommand");

	Params::UFieldSystemComponent_AddFieldCommand_Params Parms{};

	Parms.Field = Field;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// int32                              Iterations                                                       (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UFieldSystemMetaDataIteration*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// enum class EFieldResolutionType    ResolutionType                                                   (ConstParm, BlueprintVisible, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UFieldSystemMetaDataProcessingResolution*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EFieldResolutionType UFieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(class UFieldSystemMetaDataProcessingResolution* ReturnValue)
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
// enum class EFieldFilterType        FilterType                                                       (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class EFieldObjectType        ObjectType                                                       (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// enum class EFieldPositionType      PositionType                                                     (Edit, ExportObject, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UFieldSystemMetaDataFilter*  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EFieldPositionType UFieldSystemMetaDataFilter::SetMetaDataFilterType(enum class EFieldFilterType FilterType, class UFieldSystemMetaDataFilter* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemMetaDataFilter", "SetMetaDataFilterType");

	Params::UFieldSystemMetaDataFilter_SetMetaDataFilterType_Params Parms{};

	Parms.FilterType = FilterType;
	Parms.ReturnValue = ReturnValue;

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
// int32                              Magnitude                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class UUniformInteger*             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UUniformInteger::SetUniformInteger(class UUniformInteger* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformInteger", "SetUniformInteger");

	Params::UUniformInteger_SetUniformInteger_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// float                              Radius                                                           (ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     Position                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
// int32                              InteriorValue                                                    (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              ExteriorValue                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class ESetMaskConditionType   SetMaskConditionIn                                               (ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class URadialIntMask*              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class ESetMaskConditionType URadialIntMask::SetRadialIntMask(float* Radius, struct FVector* Position, int32 InteriorValue, int32 ExteriorValue, class URadialIntMask* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialIntMask", "SetRadialIntMask");

	Params::URadialIntMask_SetRadialIntMask_Params Parms{};

	Parms.InteriorValue = InteriorValue;
	Parms.ExteriorValue = ExteriorValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Radius != nullptr)
		*Radius = Parms.Radius;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

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
// float                              Magnitude                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class UUniformScalar*              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UUniformScalar::SetUniformScalar(class UUniformScalar* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformScalar", "SetUniformScalar");

	Params::UUniformScalar_SetUniformScalar_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// float                              Magnitude                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// struct FVector                     Position                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
// float                              Wavelength                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              Period                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance)
// float                              Time                                                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// enum class EWaveFunctionType       Function                                                         (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor)
// enum class EFieldFalloffType       Falloff                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, DuplicateTransient)
// class UWaveScalar*                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EFieldFalloffType UWaveScalar::SetWaveScalar(struct FVector* Position, float Wavelength, enum class EWaveFunctionType Function, class UWaveScalar* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaveScalar", "SetWaveScalar");

	Params::UWaveScalar_SetWaveScalar_Params Parms{};

	Parms.Wavelength = Wavelength;
	Parms.Function = Function;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

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
// float                              Magnitude                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// float                              MinRange                                                         (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              MaxRange                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              Default                                                          (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
// float                              Radius                                                           (ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     Position                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
// enum class EFieldFalloffType       Falloff                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, DuplicateTransient)
// class URadialFalloff*              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EFieldFalloffType URadialFalloff::SetRadialFalloff(float MinRange, float MaxRange, float Default, float* Radius, struct FVector* Position, class URadialFalloff* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialFalloff", "SetRadialFalloff");

	Params::URadialFalloff_SetRadialFalloff_Params Parms{};

	Parms.MinRange = MinRange;
	Parms.MaxRange = MaxRange;
	Parms.Default = Default;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Radius != nullptr)
		*Radius = Parms.Radius;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

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
// float                              Magnitude                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// float                              MinRange                                                         (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              MaxRange                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              Default                                                          (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
// float                              Distance                                                         (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FVector                     Position                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
// struct FVector                     Normal                                                           (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// enum class EFieldFalloffType       Falloff                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, DuplicateTransient)
// class UPlaneFalloff*               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EFieldFalloffType UPlaneFalloff::SetPlaneFalloff(float MinRange, float MaxRange, float Default, struct FVector* Position, struct FVector* Normal, class UPlaneFalloff* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlaneFalloff", "SetPlaneFalloff");

	Params::UPlaneFalloff_SetPlaneFalloff_Params Parms{};

	Parms.MinRange = MinRange;
	Parms.MaxRange = MaxRange;
	Parms.Default = Default;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (Normal != nullptr)
		*Normal = std::move(Parms.Normal);

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
// float                              Magnitude                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// float                              MinRange                                                         (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              MaxRange                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              Default                                                          (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// enum class EFieldFalloffType       Falloff                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, DuplicateTransient)
// class UBoxFalloff*                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EFieldFalloffType UBoxFalloff::SetBoxFalloff(float MinRange, float MaxRange, float Default, struct FTransform* Transform, class UBoxFalloff* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoxFalloff", "SetBoxFalloff");

	Params::UBoxFalloff_SetBoxFalloff_Params Parms{};

	Parms.MinRange = MinRange;
	Parms.MaxRange = MaxRange;
	Parms.Default = Default;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// float                              MinRange                                                         (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              MaxRange                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
// class UNoiseField*                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UNoiseField::SetNoiseField(float MinRange, float MaxRange, struct FTransform* Transform, class UNoiseField* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NoiseField", "SetNoiseField");

	Params::UNoiseField_SetNoiseField_Params Parms{};

	Parms.MinRange = MinRange;
	Parms.MaxRange = MaxRange;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// float                              Magnitude                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// struct FVector                     Direction                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UUniformVector*              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UUniformVector::SetUniformVector(class UUniformVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformVector", "SetUniformVector");

	Params::UUniformVector_SetUniformVector_Params Parms{};

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
// float                              Magnitude                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// struct FVector                     Position                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
// class URadialVector*               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float URadialVector::SetRadialVector(struct FVector* Position, class URadialVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialVector", "SetRadialVector");

	Params::URadialVector_SetRadialVector_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

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
// float                              Magnitude                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class URandomVector*               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float URandomVector::SetRandomVector(class URandomVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandomVector", "SetRandomVector");

	Params::URandomVector_SetRandomVector_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// float                              Magnitude                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class UFieldNodeBase*              LeftField                                                        (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UFieldNodeBase*              RightField                                                       (Edit, Net, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class EFieldOperationType     Operation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
// class UOperatorField*              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UFieldNodeBase* UOperatorField::SetOperatorField(enum class EFieldOperationType Operation, class UOperatorField* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OperatorField", "SetOperatorField");

	Params::UOperatorField_SetOperatorField_Params Parms{};

	Parms.Operation = Operation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UFieldNodeFloat*             FloatField                                                       (Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UToIntegerField*             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UFieldNodeFloat* UToIntegerField::SetToIntegerField(class UToIntegerField* ReturnValue)
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
// class UFieldNodeInt*               IntegerField                                                     (Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UToFloatField*               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UFieldNodeInt* UToFloatField::SetToFloatField(class UToFloatField* ReturnValue)
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
// class UFieldNodeBase*              Culling                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UFieldNodeBase*              Field                                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// enum class EFieldCullingOperationTypeOperation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
// class UCullingField*               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UFieldNodeBase* UCullingField::SetCullingField(class UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation, class UCullingField* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CullingField", "SetCullingField");

	Params::UCullingField_SetCullingField_Params Parms{};

	Parms.Field = Field;
	Parms.Operation = Operation;
	Parms.ReturnValue = ReturnValue;

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
// class UReturnResultsTerminal*      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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


