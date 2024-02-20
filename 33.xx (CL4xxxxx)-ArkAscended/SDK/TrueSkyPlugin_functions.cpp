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
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

void ATrueSkySequenceActor::SetTime(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "SetTime");

	Params::ATrueSkySequenceActor_SetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLightSource
// (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// int32                              ID                                                               (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FLinearColor                LightColour                                                      (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              Intensity                                                        (Edit, BlueprintVisible, Parm, ZeroConstructor, Config)
// struct FVector                     Pos                                                              (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
// float                              MinRadius                                                        (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              MaxRadius                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float ATrueSkySequenceActor::SetPointLightSource(int32* ID, float Intensity, float* MaxRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "SetPointLightSource");

	Params::ATrueSkySequenceActor_SetPointLightSource_Params Parms{};

	Parms.Intensity = Intensity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ID != nullptr)
		*ID = Parms.ID;

	if (MaxRadius != nullptr)
		*MaxRadius = Parms.MaxRadius;

	return Parms.ReturnValue;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLight
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class APointLight*                 Source                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)

void ATrueSkySequenceActor::SetPointLight(class APointLight** Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "SetPointLight");

	Params::ATrueSkySequenceActor_SetPointLight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Source != nullptr)
		*Source = Parms.Source;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              KeyframeUid                                                      (ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// int32                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

int32 ATrueSkySequenceActor::SetKeyframeInt(class FString* Name, int32* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "SetKeyframeInt");

	Params::ATrueSkySequenceActor_SetKeyframeInt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              KeyframeUid                                                      (ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

int32 ATrueSkySequenceActor::SetKeyframeFloat(class FString* Name, float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "SetKeyframeFloat");

	Params::ATrueSkySequenceActor_SetKeyframeFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// int32                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

void ATrueSkySequenceActor::SetInt(class FString* Name, int32* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "SetInt");

	Params::ATrueSkySequenceActor_SetInt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

void ATrueSkySequenceActor::SetFloat(class FString* Name, float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "SetFloat");

	Params::ATrueSkySequenceActor_SetFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FLinearColor                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// int32                              Layer                                                            (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// int32                              KeyframeUid                                                      (ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 ATrueSkySequenceActor::GetKeyframeInt(class FString* Name, int32 ReturnValue)
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

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	return Parms.ReturnValue;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              KeyframeUid                                                      (ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 ATrueSkySequenceActor::GetKeyframeFloat(class FString* Name, float ReturnValue)
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

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	return Parms.ReturnValue;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// int32                              QueryID                                                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Pos                                                              (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector ATrueSkySequenceActor::CloudPointTest(int32* QueryID, float ReturnValue)
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

	if (QueryID != nullptr)
		*QueryID = Parms.QueryID;

	return Parms.ReturnValue;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.CloudLineTest
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              QueryID                                                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     StartPos                                                         (Edit, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     EndPos                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector ATrueSkySequenceActor::CloudLineTest(int32* QueryID, const struct FVector& EndPos, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "CloudLineTest");

	Params::ATrueSkySequenceActor_CloudLineTest_Params Parms{};

	Parms.EndPos = EndPos;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (QueryID != nullptr)
		*QueryID = Parms.QueryID;

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


