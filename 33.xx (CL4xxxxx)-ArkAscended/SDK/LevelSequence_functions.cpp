#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LevelSequence.LevelSequence
// (None)

class UClass* ULevelSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequence");

	return Clss;
}


// LevelSequence LevelSequence.Default__LevelSequence
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelSequence* ULevelSequence::GetDefaultObj()
{
	static class ULevelSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelSequence*>(ULevelSequence::StaticClass()->DefaultObject);

	return Default;
}


// Function LevelSequence.LevelSequence.RemoveMetaDataByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InClass                                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

class UClass* ULevelSequence::RemoveMetaDataByClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequence", "RemoveMetaDataByClass");

	Params::ULevelSequence_RemoveMetaDataByClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InClass                                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class UObject*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UClass* ULevelSequence::FindOrAddMetaDataByClass(class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequence", "FindOrAddMetaDataByClass");

	Params::ULevelSequence_FindOrAddMetaDataByClass_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequence.FindMetaDataByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      InClass                                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class UObject*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UClass* ULevelSequence::FindMetaDataByClass(class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequence", "FindMetaDataByClass");

	Params::ULevelSequence_FindMetaDataByClass_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequence.CopyMetaData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InMetaData                                                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
// class UObject*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ULevelSequence::CopyMetaData(class UObject** InMetaData, class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequence", "CopyMetaData");

	Params::ULevelSequence_CopyMetaData_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMetaData != nullptr)
		*InMetaData = Parms.InMetaData;

}


// Class LevelSequence.DefaultLevelSequenceInstanceData
// (None)

class UClass* UDefaultLevelSequenceInstanceData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultLevelSequenceInstanceData");

	return Clss;
}


// DefaultLevelSequenceInstanceData LevelSequence.Default__DefaultLevelSequenceInstanceData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDefaultLevelSequenceInstanceData* UDefaultLevelSequenceInstanceData::GetDefaultObj()
{
	static class UDefaultLevelSequenceInstanceData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultLevelSequenceInstanceData*>(UDefaultLevelSequenceInstanceData::StaticClass()->DefaultObject);

	return Default;
}


// Class LevelSequence.LevelSequenceMetaData
// (None)

class UClass* ILevelSequenceMetaData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequenceMetaData");

	return Clss;
}


// LevelSequenceMetaData LevelSequence.Default__LevelSequenceMetaData
// (Public, ClassDefaultObject, ArchetypeObject)

class ILevelSequenceMetaData* ILevelSequenceMetaData::GetDefaultObj()
{
	static class ILevelSequenceMetaData* Default = nullptr;

	if (!Default)
		Default = static_cast<ILevelSequenceMetaData*>(ILevelSequenceMetaData::StaticClass()->DefaultObject);

	return Default;
}


// Class LevelSequence.AnimSequenceLevelSequenceLink
// (None)

class UClass* UAnimSequenceLevelSequenceLink::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimSequenceLevelSequenceLink");

	return Clss;
}


// AnimSequenceLevelSequenceLink LevelSequence.Default__AnimSequenceLevelSequenceLink
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimSequenceLevelSequenceLink* UAnimSequenceLevelSequenceLink::GetDefaultObj()
{
	static class UAnimSequenceLevelSequenceLink* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimSequenceLevelSequenceLink*>(UAnimSequenceLevelSequenceLink::StaticClass()->DefaultObject);

	return Default;
}


// Class LevelSequence.LevelSequenceBurnInInitSettings
// (None)

class UClass* ULevelSequenceBurnInInitSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequenceBurnInInitSettings");

	return Clss;
}


// LevelSequenceBurnInInitSettings LevelSequence.Default__LevelSequenceBurnInInitSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelSequenceBurnInInitSettings* ULevelSequenceBurnInInitSettings::GetDefaultObj()
{
	static class ULevelSequenceBurnInInitSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelSequenceBurnInInitSettings*>(ULevelSequenceBurnInInitSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LevelSequence.LevelSequenceBurnInOptions
// (None)

class UClass* ULevelSequenceBurnInOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequenceBurnInOptions");

	return Clss;
}


// LevelSequenceBurnInOptions LevelSequence.Default__LevelSequenceBurnInOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelSequenceBurnInOptions* ULevelSequenceBurnInOptions::GetDefaultObj()
{
	static class ULevelSequenceBurnInOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelSequenceBurnInOptions*>(ULevelSequenceBurnInOptions::StaticClass()->DefaultObject);

	return Default;
}


// Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftClassPath              InBurnInClass                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

struct FSoftClassPath ULevelSequenceBurnInOptions::SetBurnIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceBurnInOptions", "SetBurnIn");

	Params::ULevelSequenceBurnInOptions_SetBurnIn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LevelSequence.LevelSequenceActor
// (Actor)

class UClass* ALevelSequenceActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequenceActor");

	return Clss;
}


// LevelSequenceActor LevelSequence.Default__LevelSequenceActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ALevelSequenceActor* ALevelSequenceActor::GetDefaultObj()
{
	static class ALevelSequenceActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ALevelSequenceActor*>(ALevelSequenceActor::StaticClass()->DefaultObject);

	return Default;
}


// Function LevelSequence.LevelSequenceActor.ShowBurnin
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ALevelSequenceActor::ShowBurnin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "ShowBurnin");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*              InSequence                                                       (BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void ALevelSequenceActor::SetSequence(class ULevelSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "SetSequence");

	Params::ALevelSequenceActor_SetSequence_Params Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReplicatePlayback                                                (ConstParm, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void ALevelSequenceActor::SetReplicatePlayback(bool ReplicatePlayback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "SetReplicatePlayback");

	Params::ALevelSequenceActor_SetReplicatePlayback_Params Parms{};

	Parms.ReplicatePlayback = ReplicatePlayback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.SetBindingByTag
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        BindingTag                                                       (Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class AActor*>              Actors                                                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowBindingsFromAsset                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<class AActor*> ALevelSequenceActor::SetBindingByTag(class FName BindingTag, bool* bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "SetBindingByTag");

	Params::ALevelSequenceActor_SetBindingByTag_Params Parms{};

	Parms.BindingTag = BindingTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bAllowBindingsFromAsset != nullptr)
		*bAllowBindingsFromAsset = Parms.bAllowBindingsFromAsset;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.SetBinding
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  Binding                                                          (Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// TArray<class AActor*>              Actors                                                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowBindingsFromAsset                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<class AActor*> ALevelSequenceActor::SetBinding(struct FMovieSceneObjectBindingID* Binding, bool* bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "SetBinding");

	Params::ALevelSequenceActor_SetBinding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Binding != nullptr)
		*Binding = std::move(Parms.Binding);

	if (bAllowBindingsFromAsset != nullptr)
		*bAllowBindingsFromAsset = Parms.bAllowBindingsFromAsset;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.ResetBindings
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ALevelSequenceActor::ResetBindings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "ResetBindings");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.ResetBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  Binding                                                          (Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void ALevelSequenceActor::ResetBinding(struct FMovieSceneObjectBindingID* Binding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "ResetBinding");

	Params::ALevelSequenceActor_ResetBinding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Binding != nullptr)
		*Binding = std::move(Parms.Binding);

}


// Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Tag                                                              (ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)

class FName ALevelSequenceActor::RemoveBindingByTag(class AActor** Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "RemoveBindingByTag");

	Params::ALevelSequenceActor_RemoveBindingByTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.RemoveBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  Binding                                                          (Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)

void ALevelSequenceActor::RemoveBinding(struct FMovieSceneObjectBindingID* Binding, class AActor** Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "RemoveBinding");

	Params::ALevelSequenceActor_RemoveBinding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Binding != nullptr)
		*Binding = std::move(Parms.Binding);

	if (Actor != nullptr)
		*Actor = Parms.Actor;

}


// DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
// (Public, Delegate)
// Parameters:

void ALevelSequenceActor::OnLevelSequenceLoaded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "OnLevelSequenceLoaded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LevelSequence.LevelSequenceActor.LoadSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence*              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ALevelSequenceActor::LoadSequence(class ULevelSequence* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "LoadSequence");

	Params::ALevelSequenceActor_LoadSequence_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.HideBurnin
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ALevelSequenceActor::HideBurnin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "HideBurnin");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.GetSequencePlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequencePlayer*        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ALevelSequenceActor::GetSequencePlayer(class ULevelSequencePlayer* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "GetSequencePlayer");

	Params::ALevelSequenceActor_GetSequencePlayer_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence*              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ALevelSequenceActor::GetSequence(class ULevelSequence* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "GetSequence");

	Params::ALevelSequenceActor_GetSequence_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.FindNamedBindings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        Tag                                                              (ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<struct FMovieSceneObjectBindingID>ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName ALevelSequenceActor::FindNamedBindings(const TArray<struct FMovieSceneObjectBindingID>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "FindNamedBindings");

	Params::ALevelSequenceActor_FindNamedBindings_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.FindNamedBinding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        Tag                                                              (ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FMovieSceneObjectBindingID  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName ALevelSequenceActor::FindNamedBinding(const struct FMovieSceneObjectBindingID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "FindNamedBinding");

	Params::ALevelSequenceActor_FindNamedBinding_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.AddBindingByTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        BindingTag                                                       (Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// bool                               bAllowBindingsFromAsset                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void ALevelSequenceActor::AddBindingByTag(class FName BindingTag, class AActor** Actor, bool* bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "AddBindingByTag");

	Params::ALevelSequenceActor_AddBindingByTag_Params Parms{};

	Parms.BindingTag = BindingTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	if (bAllowBindingsFromAsset != nullptr)
		*bAllowBindingsFromAsset = Parms.bAllowBindingsFromAsset;

}


// Function LevelSequence.LevelSequenceActor.AddBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  Binding                                                          (Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// bool                               bAllowBindingsFromAsset                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void ALevelSequenceActor::AddBinding(struct FMovieSceneObjectBindingID* Binding, class AActor** Actor, bool* bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "AddBinding");

	Params::ALevelSequenceActor_AddBinding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Binding != nullptr)
		*Binding = std::move(Parms.Binding);

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	if (bAllowBindingsFromAsset != nullptr)
		*bAllowBindingsFromAsset = Parms.bAllowBindingsFromAsset;

}


// Class LevelSequence.ReplicatedLevelSequenceActor
// (Actor)

class UClass* AReplicatedLevelSequenceActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicatedLevelSequenceActor");

	return Clss;
}


// ReplicatedLevelSequenceActor LevelSequence.Default__ReplicatedLevelSequenceActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AReplicatedLevelSequenceActor* AReplicatedLevelSequenceActor::GetDefaultObj()
{
	static class AReplicatedLevelSequenceActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AReplicatedLevelSequenceActor*>(AReplicatedLevelSequenceActor::StaticClass()->DefaultObject);

	return Default;
}


// Class LevelSequence.LevelSequenceAnimSequenceLink
// (None)

class UClass* ULevelSequenceAnimSequenceLink::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequenceAnimSequenceLink");

	return Clss;
}


// LevelSequenceAnimSequenceLink LevelSequence.Default__LevelSequenceAnimSequenceLink
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelSequenceAnimSequenceLink* ULevelSequenceAnimSequenceLink::GetDefaultObj()
{
	static class ULevelSequenceAnimSequenceLink* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelSequenceAnimSequenceLink*>(ULevelSequenceAnimSequenceLink::StaticClass()->DefaultObject);

	return Default;
}


// Class LevelSequence.LevelSequenceBurnIn
// (None)

class UClass* ULevelSequenceBurnIn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequenceBurnIn");

	return Clss;
}


// LevelSequenceBurnIn LevelSequence.Default__LevelSequenceBurnIn
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelSequenceBurnIn* ULevelSequenceBurnIn::GetDefaultObj()
{
	static class ULevelSequenceBurnIn* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelSequenceBurnIn*>(ULevelSequenceBurnIn::StaticClass()->DefaultObject);

	return Default;
}


// Function LevelSequence.LevelSequenceBurnIn.SetSettings
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     InSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

class UObject* ULevelSequenceBurnIn::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceBurnIn", "SetSettings");

	Params::ULevelSequenceBurnIn_SetSettings_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UClass*                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ULevelSequenceBurnIn::GetSettingsClass(class UClass* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceBurnIn", "GetSettingsClass");

	Params::ULevelSequenceBurnIn_GetSettingsClass_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LevelSequence.LevelSequenceDirector
// (None)

class UClass* ULevelSequenceDirector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequenceDirector");

	return Clss;
}


// LevelSequenceDirector LevelSequence.Default__LevelSequenceDirector
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelSequenceDirector* ULevelSequenceDirector::GetDefaultObj()
{
	static class ULevelSequenceDirector* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelSequenceDirector*>(ULevelSequenceDirector::StaticClass()->DefaultObject);

	return Default;
}


// Function LevelSequence.LevelSequenceDirector.OnCreated
// (Event, Public, BlueprintEvent)
// Parameters:

void ULevelSequenceDirector::OnCreated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "OnCreated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LevelSequence.LevelSequenceDirector.GetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ULevelSequenceDirector::GetSequence(class UMovieSceneSequence* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetSequence");

	Params::ULevelSequenceDirector_GetSequence_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceDirector.GetRootSequenceTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ULevelSequenceDirector::GetRootSequenceTime(const struct FQualifiedFrameTime& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetRootSequenceTime");

	Params::ULevelSequenceDirector_GetRootSequenceTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceDirector.GetMasterSequenceTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ULevelSequenceDirector::GetMasterSequenceTime(const struct FQualifiedFrameTime& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetMasterSequenceTime");

	Params::ULevelSequenceDirector_GetMasterSequenceTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceDirector.GetCurrentTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ULevelSequenceDirector::GetCurrentTime(const struct FQualifiedFrameTime& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetCurrentTime");

	Params::ULevelSequenceDirector_GetCurrentTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceDirector.GetBoundObjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UObject*>             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FMovieSceneObjectBindingID ULevelSequenceDirector::GetBoundObjects(const TArray<class UObject*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetBoundObjects");

	Params::ULevelSequenceDirector_GetBoundObjects_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetBoundObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FMovieSceneObjectBindingID ULevelSequenceDirector::GetBoundObject(class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetBoundObject");

	Params::ULevelSequenceDirector_GetBoundObject_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetBoundActors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<class AActor*>              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FMovieSceneObjectBindingID ULevelSequenceDirector::GetBoundActors(const TArray<class AActor*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetBoundActors");

	Params::ULevelSequenceDirector_GetBoundActors_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetBoundActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class AActor*                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FMovieSceneObjectBindingID ULevelSequenceDirector::GetBoundActor(class AActor* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetBoundActor");

	Params::ULevelSequenceDirector_GetBoundActor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// (Blueprint)

class UClass* ULegacyLevelSequenceDirectorBlueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LegacyLevelSequenceDirectorBlueprint");

	return Clss;
}


// LegacyLevelSequenceDirectorBlueprint LevelSequence.Default__LegacyLevelSequenceDirectorBlueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class ULegacyLevelSequenceDirectorBlueprint* ULegacyLevelSequenceDirectorBlueprint::GetDefaultObj()
{
	static class ULegacyLevelSequenceDirectorBlueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<ULegacyLevelSequenceDirectorBlueprint*>(ULegacyLevelSequenceDirectorBlueprint::StaticClass()->DefaultObject);

	return Default;
}


// Class LevelSequence.LevelSequencePlayer
// (None)

class UClass* ULevelSequencePlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequencePlayer");

	return Clss;
}


// LevelSequencePlayer LevelSequence.Default__LevelSequencePlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelSequencePlayer* ULevelSequencePlayer::GetDefaultObj()
{
	static class ULevelSequencePlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelSequencePlayer*>(ULevelSequencePlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCameraComponent*            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ULevelSequencePlayer::GetActiveCameraComponent(class UCameraComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequencePlayer", "GetActiveCameraComponent");

	Params::ULevelSequencePlayer_GetActiveCameraComponent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class ULevelSequence*              LevelSequence                                                    (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst)
// struct FMovieSceneSequencePlaybackSettingsSettings                                                         (Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// class ALevelSequenceActor*         OutActor                                                         (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// class ULevelSequencePlayer*        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* ULevelSequencePlayer::CreateLevelSequencePlayer(class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor, class ULevelSequencePlayer* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequencePlayer", "CreateLevelSequencePlayer");

	Params::ULevelSequencePlayer_CreateLevelSequencePlayer_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.Settings = Settings;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutActor != nullptr)
		*OutActor = Parms.OutActor;

	return Parms.ReturnValue;

}


// Class LevelSequence.LevelSequenceProjectSettings
// (None)

class UClass* ULevelSequenceProjectSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequenceProjectSettings");

	return Clss;
}


// LevelSequenceProjectSettings LevelSequence.Default__LevelSequenceProjectSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelSequenceProjectSettings* ULevelSequenceProjectSettings::GetDefaultObj()
{
	static class ULevelSequenceProjectSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelSequenceProjectSettings*>(ULevelSequenceProjectSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LevelSequence.LevelSequenceMediaController
// (Actor)

class UClass* ALevelSequenceMediaController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequenceMediaController");

	return Clss;
}


// LevelSequenceMediaController LevelSequence.Default__LevelSequenceMediaController
// (Public, ClassDefaultObject, ArchetypeObject)

class ALevelSequenceMediaController* ALevelSequenceMediaController::GetDefaultObj()
{
	static class ALevelSequenceMediaController* Default = nullptr;

	if (!Default)
		Default = static_cast<ALevelSequenceMediaController*>(ALevelSequenceMediaController::StaticClass()->DefaultObject);

	return Default;
}


// Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DesyncThresholdSeconds                                           (Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

float ALevelSequenceMediaController::SynchronizeToServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceMediaController", "SynchronizeToServer");

	Params::ALevelSequenceMediaController_SynchronizeToServer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceMediaController.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ALevelSequenceMediaController::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceMediaController", "Play");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
// (Final, Native, Private)
// Parameters:

void ALevelSequenceMediaController::OnRep_ServerStartTimeSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceMediaController", "OnRep_ServerStartTimeSeconds");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceMediaController.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ALevelSequenceActor*         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ALevelSequenceMediaController::GetSequence(class ALevelSequenceActor* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceMediaController", "GetSequence");

	Params::ALevelSequenceMediaController_GetSequence_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceMediaController.GetMediaComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaComponent*             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ALevelSequenceMediaController::GetMediaComponent(class UMediaComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceMediaController", "GetMediaComponent");

	Params::ALevelSequenceMediaController_GetMediaComponent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


