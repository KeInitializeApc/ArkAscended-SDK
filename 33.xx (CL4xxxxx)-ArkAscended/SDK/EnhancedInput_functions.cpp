#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EnhancedInput.EnhancedInputActionDelegateBinding
// (None)

class UClass* UEnhancedInputActionDelegateBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputActionDelegateBinding");

	return Clss;
}


// EnhancedInputActionDelegateBinding EnhancedInput.Default__EnhancedInputActionDelegateBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputActionDelegateBinding* UEnhancedInputActionDelegateBinding::GetDefaultObj()
{
	static class UEnhancedInputActionDelegateBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputActionDelegateBinding*>(UEnhancedInputActionDelegateBinding::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.EnhancedInputActionValueBinding
// (None)

class UClass* UEnhancedInputActionValueBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputActionValueBinding");

	return Clss;
}


// EnhancedInputActionValueBinding EnhancedInput.Default__EnhancedInputActionValueBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputActionValueBinding* UEnhancedInputActionValueBinding::GetDefaultObj()
{
	static class UEnhancedInputActionValueBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputActionValueBinding*>(UEnhancedInputActionValueBinding::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.EnhancedInputComponent
// (None)

class UClass* UEnhancedInputComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputComponent");

	return Clss;
}


// EnhancedInputComponent EnhancedInput.Default__EnhancedInputComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputComponent* UEnhancedInputComponent::GetDefaultObj()
{
	static class UEnhancedInputComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputComponent*>(UEnhancedInputComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.EnhancedInputComponent.GetBoundActionValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputAction*                Action                                                           (EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FInputActionValue           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FInputActionValue UEnhancedInputComponent::GetBoundActionValue(class UInputAction** Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputComponent", "GetBoundActionValue");

	Params::UEnhancedInputComponent_GetBoundActionValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Action != nullptr)
		*Action = Parms.Action;

	return Parms.ReturnValue;

}


// Class EnhancedInput.EnhancedInputDeveloperSettings
// (None)

class UClass* UEnhancedInputDeveloperSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputDeveloperSettings");

	return Clss;
}


// EnhancedInputDeveloperSettings EnhancedInput.Default__EnhancedInputDeveloperSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputDeveloperSettings* UEnhancedInputDeveloperSettings::GetDefaultObj()
{
	static class UEnhancedInputDeveloperSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputDeveloperSettings*>(UEnhancedInputDeveloperSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.EnhancedInputLibrary
// (None)

class UClass* UEnhancedInputLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputLibrary");

	return Clss;
}


// EnhancedInputLibrary EnhancedInput.Default__EnhancedInputLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputLibrary* UEnhancedInputLibrary::GetDefaultObj()
{
	static class UEnhancedInputLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputLibrary*>(UEnhancedInputLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        Context                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               bForceImmediately                                                (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UEnhancedInputLibrary::RequestRebuildControlMappingsUsingContext(class UInputMappingContext** Context, bool* bForceImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "RequestRebuildControlMappingsUsingContext");

	Params::UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = Parms.Context;

	if (bForceImmediately != nullptr)
		*bForceImmediately = Parms.bForceImmediately;

}


// Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             X                                                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
// double                             Y                                                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
// double                             Z                                                                (Edit, EditFixedSize, ReturnParm, Transient, Config)
// enum class EInputActionValueType   ValueType                                                        (Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FInputActionValue           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FInputActionValue UEnhancedInputLibrary::MakeInputActionValueOfType(enum class EInputActionValueType* ValueType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "MakeInputActionValueOfType");

	Params::UEnhancedInputLibrary_MakeInputActionValueOfType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ValueType != nullptr)
		*ValueType = Parms.ValueType;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             X                                                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
// double                             Y                                                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
// double                             Z                                                                (Edit, EditFixedSize, ReturnParm, Transient, Config)
// struct FInputActionValue           MatchValueType                                                   (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FInputActionValue           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FInputActionValue UEnhancedInputLibrary::MakeInputActionValue(const struct FInputActionValue& MatchValueType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "MakeInputActionValue");

	Params::UEnhancedInputLibrary_MakeInputActionValue_Params Parms{};

	Parms.MatchValueType = MatchValueType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.IsActionKeyMappingPlayerMappable
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEnhancedActionKeyMapping   ActionKeyMapping                                                 (Edit, ConstParm, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UEnhancedInputLibrary::IsActionKeyMappingPlayerMappable(const struct FEnhancedActionKeyMapping& ActionKeyMapping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "IsActionKeyMappingPlayerMappable");

	Params::UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Params Parms{};

	Parms.ActionKeyMapping = ActionKeyMapping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.GetThirdPlayerMappableKeySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPlayerMappableKeySlot      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPlayerMappableKeySlot UEnhancedInputLibrary::GetThirdPlayerMappableKeySlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "GetThirdPlayerMappableKeySlot");

	Params::UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.GetSecondPlayerMappableKeySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPlayerMappableKeySlot      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPlayerMappableKeySlot UEnhancedInputLibrary::GetSecondPlayerMappableKeySlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "GetSecondPlayerMappableKeySlot");

	Params::UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.GetPlayerMappableKeySettings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEnhancedActionKeyMapping   ActionKeyMapping                                                 (Edit, ConstParm, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UPlayerMappableKeySettings*  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UPlayerMappableKeySettings* UEnhancedInputLibrary::GetPlayerMappableKeySettings(const struct FEnhancedActionKeyMapping& ActionKeyMapping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "GetPlayerMappableKeySettings");

	Params::UEnhancedInputLibrary_GetPlayerMappableKeySettings_Params Parms{};

	Parms.ActionKeyMapping = ActionKeyMapping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.GetMappingName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEnhancedActionKeyMapping   ActionKeyMapping                                                 (Edit, ConstParm, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UEnhancedInputLibrary::GetMappingName(const struct FEnhancedActionKeyMapping& ActionKeyMapping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "GetMappingName");

	Params::UEnhancedInputLibrary_GetMappingName_Params Parms{};

	Parms.ActionKeyMapping = ActionKeyMapping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.GetFourthPlayerMappableKeySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPlayerMappableKeySlot      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPlayerMappableKeySlot UEnhancedInputLibrary::GetFourthPlayerMappableKeySlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "GetFourthPlayerMappableKeySlot");

	Params::UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.GetFirstPlayerMappableKeySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPlayerMappableKeySlot      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPlayerMappableKeySlot UEnhancedInputLibrary::GetFirstPlayerMappableKeySlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "GetFirstPlayerMappableKeySlot");

	Params::UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.GetBoundActionValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// class UInputAction*                Action                                                           (EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FInputActionValue           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FInputActionValue UEnhancedInputLibrary::GetBoundActionValue(class AActor** Actor, class UInputAction** Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "GetBoundActionValue");

	Params::UEnhancedInputLibrary_GetBoundActionValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	if (Action != nullptr)
		*Action = Parms.Action;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString UEnhancedInputLibrary::Conv_InputActionValueToString(const struct FInputActionValue& ActionValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToString");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToString_Params Parms{};

	Parms.ActionValue = ActionValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UEnhancedInputLibrary::Conv_InputActionValueToBool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToBool");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToBool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UEnhancedInputLibrary::Conv_InputActionValueToAxis3D(const struct FInputActionValue& ActionValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToAxis3D");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Params Parms{};

	Parms.ActionValue = ActionValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector2D UEnhancedInputLibrary::Conv_InputActionValueToAxis2D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToAxis2D");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

double UEnhancedInputLibrary::Conv_InputActionValueToAxis1D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToAxis1D");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.BreakInputActionValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           InActionValue                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             X                                                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
// double                             Y                                                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
// double                             Z                                                                (Edit, EditFixedSize, ReturnParm, Transient, Config)
// enum class EInputActionValueType   Type                                                             (Edit, BlueprintReadOnly, Net, Parm, Transient, Config)

double UEnhancedInputLibrary::BreakInputActionValue(const struct FInputActionValue& InActionValue, enum class EInputActionValueType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "BreakInputActionValue");

	Params::UEnhancedInputLibrary_BreakInputActionValue_Params Parms{};

	Parms.InActionValue = InActionValue;
	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class EnhancedInput.EnhancedInputPlatformData
// (None)

class UClass* UEnhancedInputPlatformData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputPlatformData");

	return Clss;
}


// EnhancedInputPlatformData EnhancedInput.Default__EnhancedInputPlatformData
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputPlatformData* UEnhancedInputPlatformData::GetDefaultObj()
{
	static class UEnhancedInputPlatformData* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputPlatformData*>(UEnhancedInputPlatformData::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.EnhancedInputPlatformData.GetContextRedirect
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputMappingContext*        InContext                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UInputMappingContext*        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UInputMappingContext* UEnhancedInputPlatformData::GetContextRedirect(class UInputMappingContext** InContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputPlatformData", "GetContextRedirect");

	Params::UEnhancedInputPlatformData_GetContextRedirect_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InContext != nullptr)
		*InContext = Parms.InContext;

	return Parms.ReturnValue;

}


// Class EnhancedInput.EnhancedInputPlatformSettings
// (None)

class UClass* UEnhancedInputPlatformSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputPlatformSettings");

	return Clss;
}


// EnhancedInputPlatformSettings EnhancedInput.Default__EnhancedInputPlatformSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputPlatformSettings* UEnhancedInputPlatformSettings::GetDefaultObj()
{
	static class UEnhancedInputPlatformSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputPlatformSettings*>(UEnhancedInputPlatformSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.EnhancedInputSubsystemInterface
// (None)

class UClass* IEnhancedInputSubsystemInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputSubsystemInterface");

	return Clss;
}


// EnhancedInputSubsystemInterface EnhancedInput.Default__EnhancedInputSubsystemInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IEnhancedInputSubsystemInterface* IEnhancedInputSubsystemInterface::GetDefaultObj()
{
	static class IEnhancedInputSubsystemInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IEnhancedInputSubsystemInterface*>(IEnhancedInputSubsystemInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModifyContextOptions       Options                                                          (Edit, ExportObject, Parm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class EInputMappingRebuildTypeRebuildType                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void IEnhancedInputSubsystemInterface::RequestRebuildControlMappings(const struct FModifyContextOptions& Options, enum class EInputMappingRebuildType RebuildType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RequestRebuildControlMappings");

	Params::IEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Params Parms{};

	Parms.Options = Options;
	Parms.RebuildType = RebuildType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappableConfig
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlayerMappableInputConfig*  Config                                                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FModifyContextOptions       Options                                                          (Edit, ExportObject, Parm, ZeroConstructor, GlobalConfig, SubobjectReference)

void IEnhancedInputSubsystemInterface::RemovePlayerMappableConfig(class UPlayerMappableInputConfig* Config, const struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemovePlayerMappableConfig");

	Params::IEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Params Parms{};

	Parms.Config = Config;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        MappingContext                                                   (Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FModifyContextOptions       Options                                                          (Edit, ExportObject, Parm, ZeroConstructor, GlobalConfig, SubobjectReference)

void IEnhancedInputSubsystemInterface::RemoveMappingContext(class UInputMappingContext* MappingContext, const struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemoveMappingContext");

	Params::IEnhancedInputSubsystemInterface_RemoveMappingContext_Params Parms{};

	Parms.MappingContext = MappingContext;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeysForMapping
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        MappingName                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FModifyContextOptions       Options                                                          (Edit, ExportObject, Parm, ZeroConstructor, GlobalConfig, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 IEnhancedInputSubsystemInterface::RemoveAllPlayerMappedKeysForMapping(class FName MappingName, const struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemoveAllPlayerMappedKeysForMapping");

	Params::IEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Params Parms{};

	Parms.MappingName = MappingName;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeys
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModifyContextOptions       Options                                                          (Edit, ExportObject, Parm, ZeroConstructor, GlobalConfig, SubobjectReference)

void IEnhancedInputSubsystemInterface::RemoveAllPlayerMappedKeys(const struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemoveAllPlayerMappedKeys");

	Params::IEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Params Parms{};

	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UInputMappingContext*>PrioritizedActiveContexts                                        (BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UInputMappingContext*        InputContext                                                     (Edit, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UInputAction*                Action                                                           (EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FKey                        Key                                                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// TArray<struct FMappingQueryIssue>  OutIssues                                                        (Edit, ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EMappingQueryIssue      BlockingIssues                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EMappingQueryResult     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EMappingQueryResult IEnhancedInputSubsystemInterface::QueryMapKeyInContextSet(const TArray<class UInputMappingContext*>& PrioritizedActiveContexts, class UInputMappingContext* InputContext, class UInputAction** Action, const struct FKey& Key, const TArray<struct FMappingQueryIssue>& OutIssues, enum class EMappingQueryIssue BlockingIssues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "QueryMapKeyInContextSet");

	Params::IEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Params Parms{};

	Parms.PrioritizedActiveContexts = PrioritizedActiveContexts;
	Parms.InputContext = InputContext;
	Parms.Key = Key;
	Parms.OutIssues = OutIssues;
	Parms.BlockingIssues = BlockingIssues;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Action != nullptr)
		*Action = Parms.Action;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        InputContext                                                     (Edit, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UInputAction*                Action                                                           (EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FKey                        Key                                                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// TArray<struct FMappingQueryIssue>  OutIssues                                                        (Edit, ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EMappingQueryIssue      BlockingIssues                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EMappingQueryResult     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EMappingQueryResult IEnhancedInputSubsystemInterface::QueryMapKeyInActiveContextSet(class UInputMappingContext* InputContext, class UInputAction** Action, const struct FKey& Key, const TArray<struct FMappingQueryIssue>& OutIssues, enum class EMappingQueryIssue BlockingIssues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "QueryMapKeyInActiveContextSet");

	Params::IEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Params Parms{};

	Parms.InputContext = InputContext;
	Parms.Key = Key;
	Parms.OutIssues = OutIssues;
	Parms.BlockingIssues = BlockingIssues;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Action != nullptr)
		*Action = Parms.Action;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputAction*                Action                                                           (EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FKey>                ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FKey> IEnhancedInputSubsystemInterface::QueryKeysMappedToAction(class UInputAction** Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "QueryKeysMappedToAction");

	Params::IEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Action != nullptr)
		*Action = Parms.Action;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.K2_RemovePlayerMappedKeyInSlot
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        MappingName                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FPlayerMappableKeySlot      KeySlot                                                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FModifyContextOptions       Options                                                          (Edit, ExportObject, Parm, ZeroConstructor, GlobalConfig, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 IEnhancedInputSubsystemInterface::K2_RemovePlayerMappedKeyInSlot(class FName MappingName, const struct FPlayerMappableKeySlot& KeySlot, const struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "K2_RemovePlayerMappedKeyInSlot");

	Params::IEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Params Parms{};

	Parms.MappingName = MappingName;
	Parms.KeySlot = KeySlot;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.K2_GetPlayerMappedKeyInSlot
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        MappingName                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FPlayerMappableKeySlot      KeySlot                                                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FKey                        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FKey IEnhancedInputSubsystemInterface::K2_GetPlayerMappedKeyInSlot(class FName MappingName, const struct FPlayerMappableKeySlot& KeySlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "K2_GetPlayerMappedKeyInSlot");

	Params::IEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Params Parms{};

	Parms.MappingName = MappingName;
	Parms.KeySlot = KeySlot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.K2_AddPlayerMappedKeyInSlot
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        MappingName                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FKey                        NewKey                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FPlayerMappableKeySlot      KeySlot                                                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FModifyContextOptions       Options                                                          (Edit, ExportObject, Parm, ZeroConstructor, GlobalConfig, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 IEnhancedInputSubsystemInterface::K2_AddPlayerMappedKeyInSlot(class FName MappingName, const struct FKey& NewKey, const struct FPlayerMappableKeySlot& KeySlot, const struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "K2_AddPlayerMappedKeyInSlot");

	Params::IEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Params Parms{};

	Parms.MappingName = MappingName;
	Parms.NewKey = NewKey;
	Parms.KeySlot = KeySlot;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForAction
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// TArray<class UInputModifier*>      Modifiers                                                        (BlueprintVisible, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UInputTrigger*>       Triggers                                                         (ConstParm, ExportObject, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void IEnhancedInputSubsystemInterface::InjectInputVectorForAction(class UInputAction** Action, struct FVector* Value, TArray<class UInputModifier*>* Modifiers, TArray<class UInputTrigger*>* Triggers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "InjectInputVectorForAction");

	Params::IEnhancedInputSubsystemInterface_InjectInputVectorForAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Action != nullptr)
		*Action = Parms.Action;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	if (Modifiers != nullptr)
		*Modifiers = std::move(Parms.Modifiers);

	if (Triggers != nullptr)
		*Triggers = std::move(Parms.Triggers);

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForAction
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FInputActionValue           RawValue                                                         (Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UInputModifier*>      Modifiers                                                        (BlueprintVisible, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UInputTrigger*>       Triggers                                                         (ConstParm, ExportObject, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void IEnhancedInputSubsystemInterface::InjectInputForAction(class UInputAction** Action, const struct FInputActionValue& RawValue, TArray<class UInputModifier*>* Modifiers, TArray<class UInputTrigger*>* Triggers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "InjectInputForAction");

	Params::IEnhancedInputSubsystemInterface_InjectInputForAction_Params Parms{};

	Parms.RawValue = RawValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Action != nullptr)
		*Action = Parms.Action;

	if (Modifiers != nullptr)
		*Modifiers = std::move(Parms.Modifiers);

	if (Triggers != nullptr)
		*Triggers = std::move(Parms.Triggers);

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputMappingContext*        MappingContext                                                   (Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              OutFoundPriority                                                 (BlueprintVisible, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool IEnhancedInputSubsystemInterface::HasMappingContext(class UInputMappingContext* MappingContext, int32 OutFoundPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "HasMappingContext");

	Params::IEnhancedInputSubsystemInterface_HasMappingContext_Params Parms{};

	Parms.MappingContext = MappingContext;
	Parms.OutFoundPriority = OutFoundPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappedKeys
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        MappingName                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FKey>                ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FKey> IEnhancedInputSubsystemInterface::GetAllPlayerMappedKeys(class FName MappingName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "GetAllPlayerMappedKeys");

	Params::IEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Params Parms{};

	Parms.MappingName = MappingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappableActionKeyMappings
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FEnhancedActionKeyMapping>ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FEnhancedActionKeyMapping> IEnhancedInputSubsystemInterface::GetAllPlayerMappableActionKeyMappings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "GetAllPlayerMappableActionKeyMappings");

	Params::IEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void IEnhancedInputSubsystemInterface::ClearAllMappings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "ClearAllMappings");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappableConfig
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlayerMappableInputConfig*  Config                                                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FModifyContextOptions       Options                                                          (Edit, ExportObject, Parm, ZeroConstructor, GlobalConfig, SubobjectReference)

void IEnhancedInputSubsystemInterface::AddPlayerMappableConfig(class UPlayerMappableInputConfig* Config, const struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "AddPlayerMappableConfig");

	Params::IEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Params Parms{};

	Parms.Config = Config;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        MappingContext                                                   (Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Priority                                                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FModifyContextOptions       Options                                                          (Edit, ExportObject, Parm, ZeroConstructor, GlobalConfig, SubobjectReference)

void IEnhancedInputSubsystemInterface::AddMappingContext(class UInputMappingContext* MappingContext, int32* Priority, const struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "AddMappingContext");

	Params::IEnhancedInputSubsystemInterface_AddMappingContext_Params Parms{};

	Parms.MappingContext = MappingContext;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Priority != nullptr)
		*Priority = Parms.Priority;

}


// Class EnhancedInput.EnhancedInputLocalPlayerSubsystem
// (None)

class UClass* UEnhancedInputLocalPlayerSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputLocalPlayerSubsystem");

	return Clss;
}


// EnhancedInputLocalPlayerSubsystem EnhancedInput.Default__EnhancedInputLocalPlayerSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputLocalPlayerSubsystem* UEnhancedInputLocalPlayerSubsystem::GetDefaultObj()
{
	static class UEnhancedInputLocalPlayerSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputLocalPlayerSubsystem*>(UEnhancedInputLocalPlayerSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.EnhancedInputWorldSubsystem
// (None)

class UClass* UEnhancedInputWorldSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputWorldSubsystem");

	return Clss;
}


// EnhancedInputWorldSubsystem EnhancedInput.Default__EnhancedInputWorldSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputWorldSubsystem* UEnhancedInputWorldSubsystem::GetDefaultObj()
{
	static class UEnhancedInputWorldSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputWorldSubsystem*>(UEnhancedInputWorldSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.EnhancedInputWorldSubsystem.RemoveActorInputComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UEnhancedInputWorldSubsystem::RemoveActorInputComponent(class AActor** Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputWorldSubsystem", "RemoveActorInputComponent");

	Params::UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputWorldSubsystem.AddActorInputComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)

void UEnhancedInputWorldSubsystem::AddActorInputComponent(class AActor** Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputWorldSubsystem", "AddActorInputComponent");

	Params::UEnhancedInputWorldSubsystem_AddActorInputComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

}


// Class EnhancedInput.EnhancedPlayerInput
// (None)

class UClass* UEnhancedPlayerInput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedPlayerInput");

	return Clss;
}


// EnhancedPlayerInput EnhancedInput.Default__EnhancedPlayerInput
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UEnhancedPlayerInput* UEnhancedPlayerInput::GetDefaultObj()
{
	static class UEnhancedPlayerInput* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedPlayerInput*>(UEnhancedPlayerInput::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputAction
// (None)

class UClass* UInputAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputAction");

	return Clss;
}


// InputAction EnhancedInput.Default__InputAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputAction* UInputAction::GetDefaultObj()
{
	static class UInputAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputAction*>(UInputAction::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputDebugKeyDelegateBinding
// (None)

class UClass* UInputDebugKeyDelegateBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputDebugKeyDelegateBinding");

	return Clss;
}


// InputDebugKeyDelegateBinding EnhancedInput.Default__InputDebugKeyDelegateBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputDebugKeyDelegateBinding* UInputDebugKeyDelegateBinding::GetDefaultObj()
{
	static class UInputDebugKeyDelegateBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputDebugKeyDelegateBinding*>(UInputDebugKeyDelegateBinding::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputMappingContext
// (None)

class UClass* UInputMappingContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputMappingContext");

	return Clss;
}


// InputMappingContext EnhancedInput.Default__InputMappingContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputMappingContext* UInputMappingContext::GetDefaultObj()
{
	static class UInputMappingContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputMappingContext*>(UInputMappingContext::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.InputMappingContext.UnmapKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FKey                        Key                                                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)

void UInputMappingContext::UnmapKey(class UInputAction** Action, const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputMappingContext", "UnmapKey");

	Params::UInputMappingContext_UnmapKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Action != nullptr)
		*Action = Parms.Action;

}


// Function EnhancedInput.InputMappingContext.UnmapAllKeysFromAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UInputMappingContext::UnmapAllKeysFromAction(class UInputAction** Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputMappingContext", "UnmapAllKeysFromAction");

	Params::UInputMappingContext_UnmapAllKeysFromAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Action != nullptr)
		*Action = Parms.Action;

}


// Function EnhancedInput.InputMappingContext.UnmapAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UInputMappingContext::UnmapAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputMappingContext", "UnmapAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.InputMappingContext.UnmapAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UInputMappingContext::UnmapAction(class UInputAction** Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputMappingContext", "UnmapAction");

	Params::UInputMappingContext_UnmapAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Action != nullptr)
		*Action = Parms.Action;

}


// Function EnhancedInput.InputMappingContext.MapKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FKey                        ToKey                                                            (Edit, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FEnhancedActionKeyMapping   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FEnhancedActionKeyMapping UInputMappingContext::MapKey(class UInputAction** Action, struct FKey* ToKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputMappingContext", "MapKey");

	Params::UInputMappingContext_MapKey_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Action != nullptr)
		*Action = Parms.Action;

	if (ToKey != nullptr)
		*ToKey = std::move(Parms.ToKey);

	return Parms.ReturnValue;

}


// Class EnhancedInput.InputModifier
// (None)

class UClass* UInputModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifier");

	return Clss;
}


// InputModifier EnhancedInput.Default__InputModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifier* UInputModifier::GetDefaultObj()
{
	static class UInputModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifier*>(UInputModifier::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.InputModifier.ModifyRaw
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UEnhancedPlayerInput*        PlayerInput                                                      (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
// struct FInputActionValue           CurrentValue                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FInputActionValue           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FInputActionValue UInputModifier::ModifyRaw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputModifier", "ModifyRaw");

	Params::UInputModifier_ModifyRaw_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.InputModifier.GetVisualizationColor
// (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FInputActionValue           SampleValue                                                      (Net, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FInputActionValue           FinalValue                                                       (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FLinearColor                ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLinearColor UInputModifier::GetVisualizationColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputModifier", "GetVisualizationColor");

	Params::UInputModifier_GetVisualizationColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class EnhancedInput.InputModifierDeadZone
// (None)

class UClass* UInputModifierDeadZone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierDeadZone");

	return Clss;
}


// InputModifierDeadZone EnhancedInput.Default__InputModifierDeadZone
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierDeadZone* UInputModifierDeadZone::GetDefaultObj()
{
	static class UInputModifierDeadZone* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierDeadZone*>(UInputModifierDeadZone::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierScalar
// (None)

class UClass* UInputModifierScalar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierScalar");

	return Clss;
}


// InputModifierScalar EnhancedInput.Default__InputModifierScalar
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierScalar* UInputModifierScalar::GetDefaultObj()
{
	static class UInputModifierScalar* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierScalar*>(UInputModifierScalar::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierScaleByDeltaTime
// (None)

class UClass* UInputModifierScaleByDeltaTime::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierScaleByDeltaTime");

	return Clss;
}


// InputModifierScaleByDeltaTime EnhancedInput.Default__InputModifierScaleByDeltaTime
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierScaleByDeltaTime* UInputModifierScaleByDeltaTime::GetDefaultObj()
{
	static class UInputModifierScaleByDeltaTime* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierScaleByDeltaTime*>(UInputModifierScaleByDeltaTime::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierNegate
// (None)

class UClass* UInputModifierNegate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierNegate");

	return Clss;
}


// InputModifierNegate EnhancedInput.Default__InputModifierNegate
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierNegate* UInputModifierNegate::GetDefaultObj()
{
	static class UInputModifierNegate* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierNegate*>(UInputModifierNegate::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierSmooth
// (None)

class UClass* UInputModifierSmooth::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierSmooth");

	return Clss;
}


// InputModifierSmooth EnhancedInput.Default__InputModifierSmooth
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierSmooth* UInputModifierSmooth::GetDefaultObj()
{
	static class UInputModifierSmooth* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierSmooth*>(UInputModifierSmooth::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierResponseCurveExponential
// (None)

class UClass* UInputModifierResponseCurveExponential::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierResponseCurveExponential");

	return Clss;
}


// InputModifierResponseCurveExponential EnhancedInput.Default__InputModifierResponseCurveExponential
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierResponseCurveExponential* UInputModifierResponseCurveExponential::GetDefaultObj()
{
	static class UInputModifierResponseCurveExponential* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierResponseCurveExponential*>(UInputModifierResponseCurveExponential::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierResponseCurveUser
// (None)

class UClass* UInputModifierResponseCurveUser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierResponseCurveUser");

	return Clss;
}


// InputModifierResponseCurveUser EnhancedInput.Default__InputModifierResponseCurveUser
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierResponseCurveUser* UInputModifierResponseCurveUser::GetDefaultObj()
{
	static class UInputModifierResponseCurveUser* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierResponseCurveUser*>(UInputModifierResponseCurveUser::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierFOVScaling
// (None)

class UClass* UInputModifierFOVScaling::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierFOVScaling");

	return Clss;
}


// InputModifierFOVScaling EnhancedInput.Default__InputModifierFOVScaling
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierFOVScaling* UInputModifierFOVScaling::GetDefaultObj()
{
	static class UInputModifierFOVScaling* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierFOVScaling*>(UInputModifierFOVScaling::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierToWorldSpace
// (None)

class UClass* UInputModifierToWorldSpace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierToWorldSpace");

	return Clss;
}


// InputModifierToWorldSpace EnhancedInput.Default__InputModifierToWorldSpace
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierToWorldSpace* UInputModifierToWorldSpace::GetDefaultObj()
{
	static class UInputModifierToWorldSpace* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierToWorldSpace*>(UInputModifierToWorldSpace::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputModifierSwizzleAxis
// (None)

class UClass* UInputModifierSwizzleAxis::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputModifierSwizzleAxis");

	return Clss;
}


// InputModifierSwizzleAxis EnhancedInput.Default__InputModifierSwizzleAxis
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputModifierSwizzleAxis* UInputModifierSwizzleAxis::GetDefaultObj()
{
	static class UInputModifierSwizzleAxis* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputModifierSwizzleAxis*>(UInputModifierSwizzleAxis::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTrigger
// (None)

class UClass* UInputTrigger::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTrigger");

	return Clss;
}


// InputTrigger EnhancedInput.Default__InputTrigger
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTrigger* UInputTrigger::GetDefaultObj()
{
	static class UInputTrigger* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTrigger*>(UInputTrigger::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.InputTrigger.UpdateState
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnhancedPlayerInput*        PlayerInput                                                      (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
// struct FInputActionValue           ModifiedValue                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// enum class ETriggerState           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class ETriggerState UInputTrigger::UpdateState(struct FInputActionValue* ModifiedValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputTrigger", "UpdateState");

	Params::UInputTrigger_UpdateState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ModifiedValue != nullptr)
		*ModifiedValue = std::move(Parms.ModifiedValue);

	return Parms.ReturnValue;

}


// Function EnhancedInput.InputTrigger.IsActuated
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FInputActionValue           ForValue                                                         (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UInputTrigger::IsActuated(struct FInputActionValue* ForValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputTrigger", "IsActuated");

	Params::UInputTrigger_IsActuated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ForValue != nullptr)
		*ForValue = std::move(Parms.ForValue);

	return Parms.ReturnValue;

}


// Function EnhancedInput.InputTrigger.GetTriggerType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ETriggerType            ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class ETriggerType UInputTrigger::GetTriggerType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputTrigger", "GetTriggerType");

	Params::UInputTrigger_GetTriggerType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class EnhancedInput.InputTriggerTimedBase
// (None)

class UClass* UInputTriggerTimedBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerTimedBase");

	return Clss;
}


// InputTriggerTimedBase EnhancedInput.Default__InputTriggerTimedBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerTimedBase* UInputTriggerTimedBase::GetDefaultObj()
{
	static class UInputTriggerTimedBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerTimedBase*>(UInputTriggerTimedBase::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerDown
// (None)

class UClass* UInputTriggerDown::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerDown");

	return Clss;
}


// InputTriggerDown EnhancedInput.Default__InputTriggerDown
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerDown* UInputTriggerDown::GetDefaultObj()
{
	static class UInputTriggerDown* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerDown*>(UInputTriggerDown::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerPressed
// (None)

class UClass* UInputTriggerPressed::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerPressed");

	return Clss;
}


// InputTriggerPressed EnhancedInput.Default__InputTriggerPressed
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerPressed* UInputTriggerPressed::GetDefaultObj()
{
	static class UInputTriggerPressed* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerPressed*>(UInputTriggerPressed::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerReleased
// (None)

class UClass* UInputTriggerReleased::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerReleased");

	return Clss;
}


// InputTriggerReleased EnhancedInput.Default__InputTriggerReleased
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerReleased* UInputTriggerReleased::GetDefaultObj()
{
	static class UInputTriggerReleased* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerReleased*>(UInputTriggerReleased::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerHold
// (None)

class UClass* UInputTriggerHold::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerHold");

	return Clss;
}


// InputTriggerHold EnhancedInput.Default__InputTriggerHold
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerHold* UInputTriggerHold::GetDefaultObj()
{
	static class UInputTriggerHold* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerHold*>(UInputTriggerHold::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerHoldAndRelease
// (None)

class UClass* UInputTriggerHoldAndRelease::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerHoldAndRelease");

	return Clss;
}


// InputTriggerHoldAndRelease EnhancedInput.Default__InputTriggerHoldAndRelease
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerHoldAndRelease* UInputTriggerHoldAndRelease::GetDefaultObj()
{
	static class UInputTriggerHoldAndRelease* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerHoldAndRelease*>(UInputTriggerHoldAndRelease::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerTap
// (None)

class UClass* UInputTriggerTap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerTap");

	return Clss;
}


// InputTriggerTap EnhancedInput.Default__InputTriggerTap
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerTap* UInputTriggerTap::GetDefaultObj()
{
	static class UInputTriggerTap* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerTap*>(UInputTriggerTap::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerPulse
// (None)

class UClass* UInputTriggerPulse::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerPulse");

	return Clss;
}


// InputTriggerPulse EnhancedInput.Default__InputTriggerPulse
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerPulse* UInputTriggerPulse::GetDefaultObj()
{
	static class UInputTriggerPulse* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerPulse*>(UInputTriggerPulse::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerChordAction
// (None)

class UClass* UInputTriggerChordAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerChordAction");

	return Clss;
}


// InputTriggerChordAction EnhancedInput.Default__InputTriggerChordAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerChordAction* UInputTriggerChordAction::GetDefaultObj()
{
	static class UInputTriggerChordAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerChordAction*>(UInputTriggerChordAction::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerChordBlocker
// (None)

class UClass* UInputTriggerChordBlocker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerChordBlocker");

	return Clss;
}


// InputTriggerChordBlocker EnhancedInput.Default__InputTriggerChordBlocker
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerChordBlocker* UInputTriggerChordBlocker::GetDefaultObj()
{
	static class UInputTriggerChordBlocker* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerChordBlocker*>(UInputTriggerChordBlocker::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.InputTriggerCombo
// (None)

class UClass* UInputTriggerCombo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputTriggerCombo");

	return Clss;
}


// InputTriggerCombo EnhancedInput.Default__InputTriggerCombo
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputTriggerCombo* UInputTriggerCombo::GetDefaultObj()
{
	static class UInputTriggerCombo* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputTriggerCombo*>(UInputTriggerCombo::StaticClass()->DefaultObject);

	return Default;
}


// Class EnhancedInput.PlayerMappableInputConfig
// (None)

class UClass* UPlayerMappableInputConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerMappableInputConfig");

	return Clss;
}


// PlayerMappableInputConfig EnhancedInput.Default__PlayerMappableInputConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerMappableInputConfig* UPlayerMappableInputConfig::GetDefaultObj()
{
	static class UPlayerMappableInputConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerMappableInputConfig*>(UPlayerMappableInputConfig::StaticClass()->DefaultObject);

	return Default;
}


// Function EnhancedInput.PlayerMappableInputConfig.ResetToDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPlayerMappableInputConfig::ResetToDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "ResetToDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function EnhancedInput.PlayerMappableInputConfig.IsDeprecated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UPlayerMappableInputConfig::IsDeprecated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "IsDeprecated");

	Params::UPlayerMappableInputConfig_IsDeprecated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetPlayerMappableKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FEnhancedActionKeyMapping>ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FEnhancedActionKeyMapping> UPlayerMappableInputConfig::GetPlayerMappableKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetPlayerMappableKeys");

	Params::UPlayerMappableInputConfig_GetPlayerMappableKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UPlayerMappableInputConfig::GetMetadata()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetMetadata");

	Params::UPlayerMappableInputConfig_GetMetadata_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetMappingContexts
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class UInputMappingContext*, int32>ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TMap<class UInputMappingContext*, int32> UPlayerMappableInputConfig::GetMappingContexts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetMappingContexts");

	Params::UPlayerMappableInputConfig_GetMappingContexts_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetMappingByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        MappingName                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FEnhancedActionKeyMapping   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FEnhancedActionKeyMapping UPlayerMappableInputConfig::GetMappingByName(class FName MappingName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetMappingByName");

	Params::UPlayerMappableInputConfig_GetMappingByName_Params Parms{};

	Parms.MappingName = MappingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetKeysBoundToAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputAction*                InAction                                                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FEnhancedActionKeyMapping>ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FEnhancedActionKeyMapping> UPlayerMappableInputConfig::GetKeysBoundToAction(class UInputAction* InAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetKeysBoundToAction");

	Params::UPlayerMappableInputConfig_GetKeysBoundToAction_Params Parms{};

	Parms.InAction = InAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FText UPlayerMappableInputConfig::GetDisplayName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetDisplayName");

	Params::UPlayerMappableInputConfig_GetDisplayName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetConfigName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UPlayerMappableInputConfig::GetConfigName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetConfigName");

	Params::UPlayerMappableInputConfig_GetConfigName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class EnhancedInput.PlayerMappableKeySettings
// (None)

class UClass* UPlayerMappableKeySettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerMappableKeySettings");

	return Clss;
}


// PlayerMappableKeySettings EnhancedInput.Default__PlayerMappableKeySettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerMappableKeySettings* UPlayerMappableKeySettings::GetDefaultObj()
{
	static class UPlayerMappableKeySettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerMappableKeySettings*>(UPlayerMappableKeySettings::StaticClass()->DefaultObject);

	return Default;
}

}


