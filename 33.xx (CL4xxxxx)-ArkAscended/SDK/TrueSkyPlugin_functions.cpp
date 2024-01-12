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
// struct FLinearColor                LightColour                                                      (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Intensity                                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, Config)
// struct FVector                     Pos                                                              (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              MinRadius                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              MaxRadius                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)

float ATrueSkySequenceActor::SetPointLightSource(int32* ID, float* Intensity, struct FVector* Pos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "SetPointLightSource");

	Params::ATrueSkySequenceActor_SetPointLightSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ID != nullptr)
		*ID = Parms.ID;

	if (Intensity != nullptr)
		*Intensity = Parms.Intensity;

	if (Pos != nullptr)
		*Pos = std::move(Parms.Pos);

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
// int32                              KeyframeUid                                                      (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// int32                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

int32 ATrueSkySequenceActor::SetKeyframeInt(class FString* Name, int32 Value)
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

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	return Parms.ReturnValue;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              KeyframeUid                                                      (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

int32 ATrueSkySequenceActor::SetKeyframeFloat(class FString* Name, float Value)
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

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	return Parms.ReturnValue;

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
// struct FRotator                    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FRotator ATrueSkySequenceActor::GetSunRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "GetSunRotation");

	Params::ATrueSkySequenceActor_GetSunRotation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLinearColor ATrueSkySequenceActor::GetSunColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "GetSunColor");

	Params::ATrueSkySequenceActor_GetSunColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableSkyKeyframe
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 ATrueSkySequenceActor::GetNextModifiableSkyKeyframe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "GetNextModifiableSkyKeyframe");

	Params::ATrueSkySequenceActor_GetNextModifiableSkyKeyframe_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableCloudKeyframe
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Layer                                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 ATrueSkySequenceActor::GetNextModifiableCloudKeyframe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "GetNextModifiableCloudKeyframe");

	Params::ATrueSkySequenceActor_GetNextModifiableCloudKeyframe_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              KeyframeUid                                                      (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 ATrueSkySequenceActor::GetKeyframeInt(class FString* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "GetKeyframeInt");

	Params::ATrueSkySequenceActor_GetKeyframeInt_Params Parms{};


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
// int32                              KeyframeUid                                                      (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float ATrueSkySequenceActor::GetKeyframeFloat(class FString* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "GetKeyframeFloat");

	Params::ATrueSkySequenceActor_GetKeyframeFloat_Params Parms{};


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
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 ATrueSkySequenceActor::GetInt(class FString* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "GetInt");

	Params::ATrueSkySequenceActor_GetInt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	return Parms.ReturnValue;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.GetFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float ATrueSkySequenceActor::GetFloat(class FString* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "GetFloat");

	Params::ATrueSkySequenceActor_GetFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	return Parms.ReturnValue;

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
// int32                              QueryID                                                          (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Pos                                                              (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float ATrueSkySequenceActor::CloudPointTest(int32 QueryID, struct FVector* Pos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "CloudPointTest");

	Params::ATrueSkySequenceActor_CloudPointTest_Params Parms{};

	Parms.QueryID = QueryID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Pos != nullptr)
		*Pos = std::move(Parms.Pos);

	return Parms.ReturnValue;

}


// Function TrueSkyPlugin.TrueSkySequenceActor.CloudLineTest
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              QueryID                                                          (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     StartPos                                                         (BlueprintVisible, ExportObject, Net, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     EndPos                                                           (Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float ATrueSkySequenceActor::CloudLineTest(int32 QueryID, const struct FVector& StartPos, const struct FVector& EndPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrueSkySequenceActor", "CloudLineTest");

	Params::ATrueSkySequenceActor_CloudLineTest_Params Parms{};

	Parms.QueryID = QueryID;
	Parms.StartPos = StartPos;
	Parms.EndPos = EndPos;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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


