#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Constraints.TransformableHandle
// (None)

class UClass* UTransformableHandle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransformableHandle");

	return Clss;
}


// TransformableHandle Constraints.Default__TransformableHandle
// (Public, ClassDefaultObject, ArchetypeObject)

class UTransformableHandle* UTransformableHandle::GetDefaultObj()
{
	static class UTransformableHandle* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransformableHandle*>(UTransformableHandle::StaticClass()->DefaultObject);

	return Default;
}


// Class Constraints.ConstraintsActor
// (Actor)

class UClass* AConstraintsActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstraintsActor");

	return Clss;
}


// ConstraintsActor Constraints.Default__ConstraintsActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AConstraintsActor* AConstraintsActor::GetDefaultObj()
{
	static class AConstraintsActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AConstraintsActor*>(AConstraintsActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Constraints.TickableConstraint
// (None)

class UClass* UTickableConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TickableConstraint");

	return Clss;
}


// TickableConstraint Constraints.Default__TickableConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class UTickableConstraint* UTickableConstraint::GetDefaultObj()
{
	static class UTickableConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<UTickableConstraint*>(UTickableConstraint::StaticClass()->DefaultObject);

	return Default;
}


// Class Constraints.ConstraintsManager
// (None)

class UClass* UConstraintsManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstraintsManager");

	return Clss;
}


// ConstraintsManager Constraints.Default__ConstraintsManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UConstraintsManager* UConstraintsManager::GetDefaultObj()
{
	static class UConstraintsManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UConstraintsManager*>(UConstraintsManager::StaticClass()->DefaultObject);

	return Default;
}


// Class Constraints.ConstraintsScriptingLibrary
// (None)

class UClass* UConstraintsScriptingLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConstraintsScriptingLibrary");

	return Clss;
}


// ConstraintsScriptingLibrary Constraints.Default__ConstraintsScriptingLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UConstraintsScriptingLibrary* UConstraintsScriptingLibrary::GetDefaultObj()
{
	static class UConstraintsScriptingLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UConstraintsScriptingLibrary*>(UConstraintsScriptingLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Constraints.ConstraintsScriptingLibrary.RemoveThisConstraint
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UTickableConstraint*         InTickableConstraint                                             (ExportObject, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UWorld* UConstraintsScriptingLibrary::RemoveThisConstraint(class UTickableConstraint** InTickableConstraint, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstraintsScriptingLibrary", "RemoveThisConstraint");

	Params::UConstraintsScriptingLibrary_RemoveThisConstraint_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTickableConstraint != nullptr)
		*InTickableConstraint = Parms.InTickableConstraint;

	return Parms.ReturnValue;

}


// Function Constraints.ConstraintsScriptingLibrary.RemoveConstraint
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InIndex                                                          (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UConstraintsScriptingLibrary::RemoveConstraint(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstraintsScriptingLibrary", "RemoveConstraint");

	Params::UConstraintsScriptingLibrary_RemoveConstraint_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Constraints.ConstraintsScriptingLibrary.GetManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UConstraintsManager*         ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UWorld* UConstraintsScriptingLibrary::GetManager(class UConstraintsManager* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstraintsScriptingLibrary", "GetManager");

	Params::UConstraintsScriptingLibrary_GetManager_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Constraints.ConstraintsScriptingLibrary.GetConstraintsArray
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UTickableConstraint*> ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UWorld* UConstraintsScriptingLibrary::GetConstraintsArray(const TArray<class UTickableConstraint*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstraintsScriptingLibrary", "GetConstraintsArray");

	Params::UConstraintsScriptingLibrary_GetConstraintsArray_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Constraints.ConstraintsScriptingLibrary.CreateTransformableHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UObject*                     InObject                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class FName                        InAttachmentName                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UTransformableHandle*        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UConstraintsScriptingLibrary::CreateTransformableHandle(class FName* InAttachmentName, class UTransformableHandle* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstraintsScriptingLibrary", "CreateTransformableHandle");

	Params::UConstraintsScriptingLibrary_CreateTransformableHandle_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InAttachmentName != nullptr)
		*InAttachmentName = Parms.InAttachmentName;

	return Parms.ReturnValue;

}


// Function Constraints.ConstraintsScriptingLibrary.CreateTransformableComponentHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class USceneComponent*             InSceneComponent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        InSocketName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UTransformableComponentHandle*ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UWorld* UConstraintsScriptingLibrary::CreateTransformableComponentHandle(class USceneComponent** InSceneComponent, class FName* InSocketName, class UTransformableComponentHandle* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstraintsScriptingLibrary", "CreateTransformableComponentHandle");

	Params::UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSceneComponent != nullptr)
		*InSceneComponent = Parms.InSceneComponent;

	if (InSocketName != nullptr)
		*InSocketName = Parms.InSocketName;

	return Parms.ReturnValue;

}


// Function Constraints.ConstraintsScriptingLibrary.CreateFromType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ETransformConstraintTypeInType                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
// class UTickableTransformConstraint*ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UWorld* UConstraintsScriptingLibrary::CreateFromType(enum class ETransformConstraintType InType, class UTickableTransformConstraint* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstraintsScriptingLibrary", "CreateFromType");

	Params::UConstraintsScriptingLibrary_CreateFromType_Params Parms{};

	Parms.InType = InType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Constraints.ConstraintsScriptingLibrary.AddConstraint
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UTransformableHandle*        InParentHandle                                                   (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UTransformableHandle*        InChildHandle                                                    (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UTickableTransformConstraint*InConstraint                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bMaintainOffset                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UWorld* UConstraintsScriptingLibrary::AddConstraint(class UTransformableHandle** InParentHandle, class UTransformableHandle** InChildHandle, class UTickableTransformConstraint** InConstraint, bool bMaintainOffset, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstraintsScriptingLibrary", "AddConstraint");

	Params::UConstraintsScriptingLibrary_AddConstraint_Params Parms{};

	Parms.bMaintainOffset = bMaintainOffset;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InParentHandle != nullptr)
		*InParentHandle = Parms.InParentHandle;

	if (InChildHandle != nullptr)
		*InChildHandle = Parms.InChildHandle;

	if (InConstraint != nullptr)
		*InConstraint = Parms.InConstraint;

	return Parms.ReturnValue;

}


// Class Constraints.TransformableComponentHandle
// (None)

class UClass* UTransformableComponentHandle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransformableComponentHandle");

	return Clss;
}


// TransformableComponentHandle Constraints.Default__TransformableComponentHandle
// (Public, ClassDefaultObject, ArchetypeObject)

class UTransformableComponentHandle* UTransformableComponentHandle::GetDefaultObj()
{
	static class UTransformableComponentHandle* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransformableComponentHandle*>(UTransformableComponentHandle::StaticClass()->DefaultObject);

	return Default;
}


// Class Constraints.TickableTransformConstraint
// (None)

class UClass* UTickableTransformConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TickableTransformConstraint");

	return Clss;
}


// TickableTransformConstraint Constraints.Default__TickableTransformConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class UTickableTransformConstraint* UTickableTransformConstraint::GetDefaultObj()
{
	static class UTickableTransformConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<UTickableTransformConstraint*>(UTickableTransformConstraint::StaticClass()->DefaultObject);

	return Default;
}


// Class Constraints.TickableTranslationConstraint
// (None)

class UClass* UTickableTranslationConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TickableTranslationConstraint");

	return Clss;
}


// TickableTranslationConstraint Constraints.Default__TickableTranslationConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class UTickableTranslationConstraint* UTickableTranslationConstraint::GetDefaultObj()
{
	static class UTickableTranslationConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<UTickableTranslationConstraint*>(UTickableTranslationConstraint::StaticClass()->DefaultObject);

	return Default;
}


// Class Constraints.TickableRotationConstraint
// (None)

class UClass* UTickableRotationConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TickableRotationConstraint");

	return Clss;
}


// TickableRotationConstraint Constraints.Default__TickableRotationConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class UTickableRotationConstraint* UTickableRotationConstraint::GetDefaultObj()
{
	static class UTickableRotationConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<UTickableRotationConstraint*>(UTickableRotationConstraint::StaticClass()->DefaultObject);

	return Default;
}


// Class Constraints.TickableScaleConstraint
// (None)

class UClass* UTickableScaleConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TickableScaleConstraint");

	return Clss;
}


// TickableScaleConstraint Constraints.Default__TickableScaleConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class UTickableScaleConstraint* UTickableScaleConstraint::GetDefaultObj()
{
	static class UTickableScaleConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<UTickableScaleConstraint*>(UTickableScaleConstraint::StaticClass()->DefaultObject);

	return Default;
}


// Class Constraints.TickableParentConstraint
// (None)

class UClass* UTickableParentConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TickableParentConstraint");

	return Clss;
}


// TickableParentConstraint Constraints.Default__TickableParentConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class UTickableParentConstraint* UTickableParentConstraint::GetDefaultObj()
{
	static class UTickableParentConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<UTickableParentConstraint*>(UTickableParentConstraint::StaticClass()->DefaultObject);

	return Default;
}


// Class Constraints.TickableLookAtConstraint
// (None)

class UClass* UTickableLookAtConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TickableLookAtConstraint");

	return Clss;
}


// TickableLookAtConstraint Constraints.Default__TickableLookAtConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class UTickableLookAtConstraint* UTickableLookAtConstraint::GetDefaultObj()
{
	static class UTickableLookAtConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<UTickableLookAtConstraint*>(UTickableLookAtConstraint::StaticClass()->DefaultObject);

	return Default;
}

}


