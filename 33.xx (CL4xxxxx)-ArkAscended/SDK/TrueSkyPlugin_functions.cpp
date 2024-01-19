#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TrueSkyPlugin.TrueSkyComponent
// (None)

class UClass* UTrueSkyComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrueSkyComponent");

	return Clss;
}


// TrueSkyComponent TrueSkyPlugin.Default__TrueSkyComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTrueSkyComponent* UTrueSkyComponent::GetDefaultObj()
{
	static class UTrueSkyComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTrueSkyComponent*>(UTrueSkyComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class TrueSkyPlugin.TrueSkySequenceActor
// (Actor)

class UClass* ATrueSkySequenceActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrueSkySequenceActor");

	return Clss;
}


// TrueSkySequenceActor TrueSkyPlugin.Default__TrueSkySequenceActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ATrueSkySequenceActor* ATrueSkySequenceActor::GetDefaultObj()
{
	static class ATrueSkySequenceActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrueSkySequenceActor*>(ATrueSkySequenceActor::StaticClass()->DefaultObject);

	return Default;
}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void ATrueSkySequenceActor::SetTime(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "SetTime");

	Params::ATrueSkySequenceActor_SetTime_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLightSource
// (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// int32                              ID                                                               (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FLinearColor                LightColour                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Intensity                                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, Config)
// struct FVector                     Pos                                                              (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              MinRadius                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              MaxRadius                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

struct FVector ATrueSkySequenceActor::SetPointLightSource(int32* ID, struct FLinearColor* LightColour, float* Intensity, float* MinRadius, float MaxRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "SetPointLightSource");

	Params::ATrueSkySequenceActor_SetPointLightSource_Params Parms{};

	Parms.MaxRadius = MaxRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ID != nullptr)
		*ID = Parms.ID;

	if (LightColour != nullptr)
		*LightColour = std::move(Parms.LightColour);

	if (Intensity != nullptr)
		*Intensity = Parms.Intensity;

	if (MinRadius != nullptr)
		*MinRadius = Parms.MinRadius;

	return Parms.ReturnValue;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLight
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class APointLight*                 Source                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config)

void ATrueSkySequenceActor::SetPointLight(class APointLight* Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "SetPointLight");

	Params::ATrueSkySequenceActor_SetPointLight_Params Parms{};

	Parms.Source = Source;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              KeyframeUid                                                      (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// int32                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void ATrueSkySequenceActor::SetKeyframeInt(int32* KeyframeUid, class FString* Name, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "SetKeyframeInt");

	Params::ATrueSkySequenceActor_SetKeyframeInt_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (KeyframeUid != nullptr)
		*KeyframeUid = Parms.KeyframeUid;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              KeyframeUid                                                      (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void ATrueSkySequenceActor::SetKeyframeFloat(int32* KeyframeUid, class FString* Name, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "SetKeyframeFloat");

	Params::ATrueSkySequenceActor_SetKeyframeFloat_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (KeyframeUid != nullptr)
		*KeyframeUid = Parms.KeyframeUid;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// int32                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void ATrueSkySequenceActor::SetInt(class FString* Name, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "SetInt");

	Params::ATrueSkySequenceActor_SetInt_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void ATrueSkySequenceActor::SetFloat(class FString* Name, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "SetFloat");

	Params::ATrueSkySequenceActor_SetFloat_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ATrueSkySequenceActor::GetSunRotation(const struct FRotator& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "GetSunRotation");

	Params::ATrueSkySequenceActor_GetSunRotation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ATrueSkySequenceActor::GetSunColor(const struct FLinearColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "GetSunColor");

	Params::ATrueSkySequenceActor_GetSunColor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableSkyKeyframe
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ATrueSkySequenceActor::GetNextModifiableSkyKeyframe(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "GetNextModifiableSkyKeyframe");

	Params::ATrueSkySequenceActor_GetNextModifiableSkyKeyframe_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableCloudKeyframe
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Layer                                                            (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 ATrueSkySequenceActor::GetNextModifiableCloudKeyframe(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "GetNextModifiableCloudKeyframe");

	Params::ATrueSkySequenceActor_GetNextModifiableCloudKeyframe_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              KeyframeUid                                                      (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ATrueSkySequenceActor::GetKeyframeInt(int32* KeyframeUid, class FString* Name, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "GetKeyframeInt");

	Params::ATrueSkySequenceActor_GetKeyframeInt_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (KeyframeUid != nullptr)
		*KeyframeUid = Parms.KeyframeUid;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              KeyframeUid                                                      (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ATrueSkySequenceActor::GetKeyframeFloat(int32* KeyframeUid, class FString* Name, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "GetKeyframeFloat");

	Params::ATrueSkySequenceActor_GetKeyframeFloat_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (KeyframeUid != nullptr)
		*KeyframeUid = Parms.KeyframeUid;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ATrueSkySequenceActor::GetInt(class FString* Name, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "GetInt");

	Params::ATrueSkySequenceActor_GetInt_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ATrueSkySequenceActor::GetFloat(class FString* Name, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "GetFloat");

	Params::ATrueSkySequenceActor_GetFloat_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function TrueSkyPlugin.TrueSkySequenceActor.ForceUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ATrueSkySequenceActor::ForceUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "ForceUpdate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.CloudPointTest
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              QueryID                                                          (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Pos                                                              (BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector ATrueSkySequenceActor::CloudPointTest(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "CloudPointTest");

	Params::ATrueSkySequenceActor_CloudPointTest_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.CloudLineTest
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              QueryID                                                          (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     StartPos                                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     EndPos                                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector ATrueSkySequenceActor::CloudLineTest(struct FVector* StartPos, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "CloudLineTest");

	Params::ATrueSkySequenceActor_CloudLineTest_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StartPos != nullptr)
		*StartPos = std::move(Parms.StartPos);

	return Parms.ReturnValue;

}


// Class TrueSkyPlugin.TrueSkySequenceAsset
// (None)

class UClass* UTrueSkySequenceAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrueSkySequenceAsset");

	return Clss;
}


// TrueSkySequenceAsset TrueSkyPlugin.Default__TrueSkySequenceAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UTrueSkySequenceAsset* UTrueSkySequenceAsset::GetDefaultObj()
{
	static class UTrueSkySequenceAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UTrueSkySequenceAsset*>(UTrueSkySequenceAsset::StaticClass()->DefaultObject);

	return Default;
}

}


