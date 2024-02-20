#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioLinkEngine.AudioLinkBlueprintInterface
// (None)

class UClass* IAudioLinkBlueprintInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioLinkBlueprintInterface");

	return Clss;
}


// AudioLinkBlueprintInterface AudioLinkEngine.Default__AudioLinkBlueprintInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IAudioLinkBlueprintInterface* IAudioLinkBlueprintInterface::GetDefaultObj()
{
	static class IAudioLinkBlueprintInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IAudioLinkBlueprintInterface*>(IAudioLinkBlueprintInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioLinkEngine.AudioLinkBlueprintInterface.StopLink
// (Native, Public, BlueprintCallable)
// Parameters:

void IAudioLinkBlueprintInterface::StopLink()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioLinkBlueprintInterface", "StopLink");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound
// (Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  NewSound                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void IAudioLinkBlueprintInterface::SetLinkSound(class USoundBase* NewSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioLinkBlueprintInterface", "SetLinkSound");

	Params::IAudioLinkBlueprintInterface_SetLinkSound_Params Parms{};

	Parms.NewSound = NewSound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              StartTime                                                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

float IAudioLinkBlueprintInterface::PlayLink()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioLinkBlueprintInterface", "PlayLink");

	Params::IAudioLinkBlueprintInterface_PlayLink_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void IAudioLinkBlueprintInterface::IsLinkPlaying(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioLinkBlueprintInterface", "IsLinkPlaying");

	Params::IAudioLinkBlueprintInterface_IsLinkPlaying_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


