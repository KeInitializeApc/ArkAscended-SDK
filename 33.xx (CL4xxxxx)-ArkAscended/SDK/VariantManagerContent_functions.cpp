#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VariantManagerContent.LevelVariantSets
// (None)

class UClass* ULevelVariantSets::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelVariantSets");

	return Clss;
}


// LevelVariantSets VariantManagerContent.Default__LevelVariantSets
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelVariantSets* ULevelVariantSets::GetDefaultObj()
{
	static class ULevelVariantSets* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelVariantSets*>(ULevelVariantSets::StaticClass()->DefaultObject);

	return Default;
}


// Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      VariantSetName                                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// class UVariantSet*                 ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ULevelVariantSets::GetVariantSetByName(class FString* VariantSetName, class UVariantSet* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelVariantSets", "GetVariantSetByName");

	Params::ULevelVariantSets_GetVariantSetByName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VariantSetName != nullptr)
		*VariantSetName = std::move(Parms.VariantSetName);

}


// Function VariantManagerContent.LevelVariantSets.GetVariantSet
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              VariantSetIndex                                                  (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// class UVariantSet*                 ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ULevelVariantSets::GetVariantSet(int32* VariantSetIndex, class UVariantSet* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelVariantSets", "GetVariantSet");

	Params::ULevelVariantSets_GetVariantSet_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VariantSetIndex != nullptr)
		*VariantSetIndex = Parms.VariantSetIndex;

}


// Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ULevelVariantSets::GetNumVariantSets(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelVariantSets", "GetNumVariantSets");

	Params::ULevelVariantSets_GetNumVariantSets_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VariantManagerContent.LevelVariantSetsActor
// (Actor)

class UClass* ALevelVariantSetsActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelVariantSetsActor");

	return Clss;
}


// LevelVariantSetsActor VariantManagerContent.Default__LevelVariantSetsActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ALevelVariantSetsActor* ALevelVariantSetsActor::GetDefaultObj()
{
	static class ALevelVariantSetsActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ALevelVariantSetsActor*>(ALevelVariantSetsActor::StaticClass()->DefaultObject);

	return Default;
}


// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      VariantSetName                                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      VariantName                                                      (Edit, ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ALevelVariantSetsActor::SwitchOnVariantByName(class FString* VariantSetName, class FString* VariantName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelVariantSetsActor", "SwitchOnVariantByName");

	Params::ALevelVariantSetsActor_SwitchOnVariantByName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VariantSetName != nullptr)
		*VariantSetName = std::move(Parms.VariantSetName);

	if (VariantName != nullptr)
		*VariantName = std::move(Parms.VariantName);

}


// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              VariantSetIndex                                                  (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              VariantIndex                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ALevelVariantSetsActor::SwitchOnVariantByIndex(int32* VariantSetIndex, int32* VariantIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelVariantSetsActor", "SwitchOnVariantByIndex");

	Params::ALevelVariantSetsActor_SwitchOnVariantByIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VariantSetIndex != nullptr)
		*VariantSetIndex = Parms.VariantSetIndex;

	if (VariantIndex != nullptr)
		*VariantIndex = Parms.VariantIndex;

}


// Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelVariantSets*           InVariantSets                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void ALevelVariantSetsActor::SetLevelVariantSets(class ULevelVariantSets** InVariantSets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelVariantSetsActor", "SetLevelVariantSets");

	Params::ALevelVariantSetsActor_SetLevelVariantSets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InVariantSets != nullptr)
		*InVariantSets = Parms.InVariantSets;

}


// Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bLoad                                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// class ULevelVariantSets*           ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ALevelVariantSetsActor::GetLevelVariantSets(bool* bLoad, class ULevelVariantSets* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelVariantSetsActor", "GetLevelVariantSets");

	Params::ALevelVariantSetsActor_GetLevelVariantSets_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bLoad != nullptr)
		*bLoad = Parms.bLoad;

}


// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// (None)

class UClass* ULevelVariantSetsFunctionDirector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelVariantSetsFunctionDirector");

	return Clss;
}


// LevelVariantSetsFunctionDirector VariantManagerContent.Default__LevelVariantSetsFunctionDirector
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelVariantSetsFunctionDirector* ULevelVariantSetsFunctionDirector::GetDefaultObj()
{
	static class ULevelVariantSetsFunctionDirector* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelVariantSetsFunctionDirector*>(ULevelVariantSetsFunctionDirector::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.PropertyValue
// (None)

class UClass* UPropertyValue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyValue");

	return Clss;
}


// PropertyValue VariantManagerContent.Default__PropertyValue
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyValue* UPropertyValue::GetDefaultObj()
{
	static class UPropertyValue* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyValue*>(UPropertyValue::StaticClass()->DefaultObject);

	return Default;
}


// Function VariantManagerContent.PropertyValue.HasRecordedData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPropertyValue::HasRecordedData(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyValue", "HasRecordedData");

	Params::UPropertyValue_HasRecordedData_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.PropertyValue.GetPropertyTooltip
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPropertyValue::GetPropertyTooltip(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyValue", "GetPropertyTooltip");

	Params::UPropertyValue_GetPropertyTooltip_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.PropertyValue.GetFullDisplayString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPropertyValue::GetFullDisplayString(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyValue", "GetFullDisplayString");

	Params::UPropertyValue_GetFullDisplayString_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VariantManagerContent.PropertyValueTransform
// (None)

class UClass* UPropertyValueTransform::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyValueTransform");

	return Clss;
}


// PropertyValueTransform VariantManagerContent.Default__PropertyValueTransform
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyValueTransform* UPropertyValueTransform::GetDefaultObj()
{
	static class UPropertyValueTransform* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyValueTransform*>(UPropertyValueTransform::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.PropertyValueVisibility
// (None)

class UClass* UPropertyValueVisibility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyValueVisibility");

	return Clss;
}


// PropertyValueVisibility VariantManagerContent.Default__PropertyValueVisibility
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyValueVisibility* UPropertyValueVisibility::GetDefaultObj()
{
	static class UPropertyValueVisibility* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyValueVisibility*>(UPropertyValueVisibility::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.PropertyValueColor
// (None)

class UClass* UPropertyValueColor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyValueColor");

	return Clss;
}


// PropertyValueColor VariantManagerContent.Default__PropertyValueColor
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyValueColor* UPropertyValueColor::GetDefaultObj()
{
	static class UPropertyValueColor* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyValueColor*>(UPropertyValueColor::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.PropertyValueMaterial
// (None)

class UClass* UPropertyValueMaterial::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyValueMaterial");

	return Clss;
}


// PropertyValueMaterial VariantManagerContent.Default__PropertyValueMaterial
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyValueMaterial* UPropertyValueMaterial::GetDefaultObj()
{
	static class UPropertyValueMaterial* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyValueMaterial*>(UPropertyValueMaterial::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.PropertyValueOption
// (None)

class UClass* UPropertyValueOption::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyValueOption");

	return Clss;
}


// PropertyValueOption VariantManagerContent.Default__PropertyValueOption
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyValueOption* UPropertyValueOption::GetDefaultObj()
{
	static class UPropertyValueOption* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyValueOption*>(UPropertyValueOption::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.PropertyValueSoftObject
// (None)

class UClass* UPropertyValueSoftObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyValueSoftObject");

	return Clss;
}


// PropertyValueSoftObject VariantManagerContent.Default__PropertyValueSoftObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyValueSoftObject* UPropertyValueSoftObject::GetDefaultObj()
{
	static class UPropertyValueSoftObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyValueSoftObject*>(UPropertyValueSoftObject::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.SwitchActor
// (Actor)

class UClass* ASwitchActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SwitchActor");

	return Clss;
}


// SwitchActor VariantManagerContent.Default__SwitchActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ASwitchActor* ASwitchActor::GetDefaultObj()
{
	static class ASwitchActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ASwitchActor*>(ASwitchActor::StaticClass()->DefaultObject);

	return Default;
}


// Function VariantManagerContent.SwitchActor.SelectOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OptionIndex                                                      (Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

int32 ASwitchActor::SelectOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitchActor", "SelectOption");

	Params::ASwitchActor_SelectOption_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VariantManagerContent.SwitchActor.GetSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ASwitchActor::GetSelectedOption(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitchActor", "GetSelectedOption");

	Params::ASwitchActor_GetSelectedOption_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.SwitchActor.GetOptions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ASwitchActor::GetOptions(const TArray<class AActor*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitchActor", "GetOptions");

	Params::ASwitchActor_GetOptions_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VariantManagerContent.Variant
// (None)

class UClass* UVariant::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Variant");

	return Clss;
}


// Variant VariantManagerContent.Default__Variant
// (Public, ClassDefaultObject, ArchetypeObject)

class UVariant* UVariant::GetDefaultObj()
{
	static class UVariant* Default = nullptr;

	if (!Default)
		Default = static_cast<UVariant*>(UVariant::StaticClass()->DefaultObject);

	return Default;
}


// Function VariantManagerContent.Variant.SwitchOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVariant::SwitchOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "SwitchOn");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.SetThumbnailFromTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  NewThumbnail                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void UVariant::SetThumbnailFromTexture(class UTexture2D* NewThumbnail)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "SetThumbnailFromTexture");

	Params::UVariant_SetThumbnailFromTexture_Params Parms{};

	Parms.NewThumbnail = NewThumbnail;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.SetThumbnailFromFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FilePath                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, EditConst, SubobjectReference)

void UVariant::SetThumbnailFromFile(const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "SetThumbnailFromFile");

	Params::UVariant_SetThumbnailFromFile_Params Parms{};

	Parms.FilePath = FilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.SetThumbnailFromEditorViewport
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVariant::SetThumbnailFromEditorViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "SetThumbnailFromEditorViewport");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.SetThumbnailFromCamera
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FTransform                  CameraTransform                                                  (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              FOVDegrees                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              MinZ                                                             (Edit, ExportObject, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              Gamma                                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UVariant::SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "SetThumbnailFromCamera");

	Params::UVariant_SetThumbnailFromCamera_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CameraTransform = CameraTransform;
	Parms.FOVDegrees = FOVDegrees;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VariantManagerContent.Variant.SetDisplayText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        NewDisplayText                                                   (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void UVariant::SetDisplayText(class FText NewDisplayText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "SetDisplayText");

	Params::UVariant_SetDisplayText_Params Parms{};

	Parms.NewDisplayText = NewDisplayText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.SetDependency
// (Final, Native, Public, HasOutParams)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVariantDependency          Dependency                                                       (BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

int32 UVariant::SetDependency(const struct FVariantDependency& Dependency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "SetDependency");

	Params::UVariant_SetDependency_Params Parms{};

	Parms.Dependency = Dependency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VariantManagerContent.Variant.IsActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UVariant::IsActive(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "IsActive");

	Params::UVariant_IsActive_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.GetThumbnail
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UVariant::GetThumbnail(class UTexture2D* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "GetThumbnail");

	Params::UVariant_GetThumbnail_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.GetParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UVariantSet*                 ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UVariant::GetParent(class UVariantSet* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "GetParent");

	Params::UVariant_GetParent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.GetNumDependencies
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UVariant::GetNumDependencies(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "GetNumDependencies");

	Params::UVariant_GetNumDependencies_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.GetNumActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UVariant::GetNumActors(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "GetNumActors");

	Params::UVariant_GetNumActors_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.GetDisplayText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UVariant::GetDisplayText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "GetDisplayText");

	Params::UVariant_GetDisplayText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.GetDependents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelVariantSets*           LevelVariantSets                                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, SubobjectReference)
// bool                               bOnlyEnabledDependencies                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<class UVariant*>            ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class ULevelVariantSets* UVariant::GetDependents(bool bOnlyEnabledDependencies, const TArray<class UVariant*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "GetDependents");

	Params::UVariant_GetDependents_Params Parms{};

	Parms.bOnlyEnabledDependencies = bOnlyEnabledDependencies;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VariantManagerContent.Variant.GetDependency
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVariantDependency          ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UVariant::GetDependency(const struct FVariantDependency& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "GetDependency");

	Params::UVariant_GetDependency_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VariantManagerContent.Variant.GetActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ActorIndex                                                       (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class AActor*                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UVariant::GetActor(int32* ActorIndex, class AActor* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "GetActor");

	Params::UVariant_GetActor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ActorIndex != nullptr)
		*ActorIndex = Parms.ActorIndex;

}


// Function VariantManagerContent.Variant.DeleteDependency
// (Final, Native, Public)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UVariant::DeleteDependency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "DeleteDependency");

	Params::UVariant_DeleteDependency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VariantManagerContent.Variant.AddDependency
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FVariantDependency          Dependency                                                       (BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UVariant::AddDependency(const struct FVariantDependency& Dependency, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "AddDependency");

	Params::UVariant_AddDependency_Params Parms{};

	Parms.Dependency = Dependency;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VariantManagerContent.VariantObjectBinding
// (None)

class UClass* UVariantObjectBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VariantObjectBinding");

	return Clss;
}


// VariantObjectBinding VariantManagerContent.Default__VariantObjectBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UVariantObjectBinding* UVariantObjectBinding::GetDefaultObj()
{
	static class UVariantObjectBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UVariantObjectBinding*>(UVariantObjectBinding::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.VariantSet
// (None)

class UClass* UVariantSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VariantSet");

	return Clss;
}


// VariantSet VariantManagerContent.Default__VariantSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UVariantSet* UVariantSet::GetDefaultObj()
{
	static class UVariantSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UVariantSet*>(UVariantSet::StaticClass()->DefaultObject);

	return Default;
}


// Function VariantManagerContent.VariantSet.SetThumbnailFromTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  NewThumbnail                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void UVariantSet::SetThumbnailFromTexture(class UTexture2D* NewThumbnail)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "SetThumbnailFromTexture");

	Params::UVariantSet_SetThumbnailFromTexture_Params Parms{};

	Parms.NewThumbnail = NewThumbnail;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.VariantSet.SetThumbnailFromFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FilePath                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, EditConst, SubobjectReference)

void UVariantSet::SetThumbnailFromFile(const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "SetThumbnailFromFile");

	Params::UVariantSet_SetThumbnailFromFile_Params Parms{};

	Parms.FilePath = FilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVariantSet::SetThumbnailFromEditorViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "SetThumbnailFromEditorViewport");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.VariantSet.SetThumbnailFromCamera
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FTransform                  CameraTransform                                                  (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              FOVDegrees                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              MinZ                                                             (Edit, ExportObject, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              Gamma                                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UVariantSet::SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "SetThumbnailFromCamera");

	Params::UVariantSet_SetThumbnailFromCamera_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CameraTransform = CameraTransform;
	Parms.FOVDegrees = FOVDegrees;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VariantManagerContent.VariantSet.SetDisplayText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        NewDisplayText                                                   (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void UVariantSet::SetDisplayText(class FText NewDisplayText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "SetDisplayText");

	Params::UVariantSet_SetDisplayText_Params Parms{};

	Parms.NewDisplayText = NewDisplayText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.VariantSet.GetVariantByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      VariantName                                                      (Edit, ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class UVariant*                    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UVariantSet::GetVariantByName(class FString* VariantName, class UVariant* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "GetVariantByName");

	Params::UVariantSet_GetVariantByName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VariantName != nullptr)
		*VariantName = std::move(Parms.VariantName);

}


// Function VariantManagerContent.VariantSet.GetVariant
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              VariantIndex                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// class UVariant*                    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UVariantSet::GetVariant(int32* VariantIndex, class UVariant* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "GetVariant");

	Params::UVariantSet_GetVariant_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VariantIndex != nullptr)
		*VariantIndex = Parms.VariantIndex;

}


// Function VariantManagerContent.VariantSet.GetThumbnail
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UVariantSet::GetThumbnail(class UTexture2D* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "GetThumbnail");

	Params::UVariantSet_GetThumbnail_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.VariantSet.GetParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelVariantSets*           ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UVariantSet::GetParent(class ULevelVariantSets* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "GetParent");

	Params::UVariantSet_GetParent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.VariantSet.GetNumVariants
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UVariantSet::GetNumVariants(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "GetNumVariants");

	Params::UVariantSet_GetNumVariants_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.VariantSet.GetDisplayText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UVariantSet::GetDisplayText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "GetDisplayText");

	Params::UVariantSet_GetDisplayText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


