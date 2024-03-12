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
// class UClass*                      InClass                                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void ULevelSequence::RemoveMetaDataByClass(class UClass** InClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequence", "RemoveMetaDataByClass");

	Params::ULevelSequence_RemoveMetaDataByClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InClass != nullptr)
		*InClass = Parms.InClass;

}


// Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InClass                                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UObject*                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* ULevelSequence::FindOrAddMetaDataByClass(class UClass** InClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequence", "FindOrAddMetaDataByClass");

	Params::ULevelSequence_FindOrAddMetaDataByClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InClass != nullptr)
		*InClass = Parms.InClass;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequence.FindMetaDataByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      InClass                                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UObject*                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* ULevelSequence::FindMetaDataByClass(class UClass** InClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequence", "FindMetaDataByClass");

	Params::ULevelSequence_FindMetaDataByClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InClass != nullptr)
		*InClass = Parms.InClass;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequence.CopyMetaData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InMetaData                                                       (Edit, ConstParm, Net, EditFixedSize, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UObject*                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* ULevelSequence::CopyMetaData(class UObject* InMetaData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequence", "CopyMetaData");

	Params::ULevelSequence_CopyMetaData_Params Parms{};

	Parms.InMetaData = InMetaData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// struct FSoftClassPath              InBurnInClass                                                    (Edit, ConstParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

void ULevelSequenceBurnInOptions::SetBurnIn(const struct FSoftClassPath& InBurnInClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceBurnInOptions", "SetBurnIn");

	Params::ULevelSequenceBurnInOptions_SetBurnIn_Params Parms{};

	Parms.InBurnInClass = InBurnInClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class ULevelSequence*              InSequence                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, InstancedReference, SubobjectReference)

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
// bool                               ReplicatePlayback                                                (BlueprintVisible, ExportObject, Parm, InstancedReference, SubobjectReference)

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
// class FName                        BindingTag                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Actors                                                           (Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowBindingsFromAsset                                          (BlueprintVisible, Net, EditFixedSize, InstancedReference, SubobjectReference)

TArray<class AActor*> ALevelSequenceActor::SetBindingByTag(class FName BindingTag, bool bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "SetBindingByTag");

	Params::ALevelSequenceActor_SetBindingByTag_Params Parms{};

	Parms.BindingTag = BindingTag;
	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.SetBinding
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  Binding                                                          (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// TArray<class AActor*>              Actors                                                           (Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowBindingsFromAsset                                          (BlueprintVisible, Net, EditFixedSize, InstancedReference, SubobjectReference)

TArray<class AActor*> ALevelSequenceActor::SetBinding(bool bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "SetBinding");

	Params::ALevelSequenceActor_SetBinding_Params Parms{};

	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FMovieSceneObjectBindingID  Binding                                                          (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

struct FMovieSceneObjectBindingID ALevelSequenceActor::ResetBinding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "ResetBinding");

	Params::ALevelSequenceActor_ResetBinding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Tag                                                              (Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
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
// struct FMovieSceneObjectBindingID  Binding                                                          (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)

struct FMovieSceneObjectBindingID ALevelSequenceActor::RemoveBinding(class AActor** Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "RemoveBinding");

	Params::ALevelSequenceActor_RemoveBinding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	return Parms.ReturnValue;

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
// class ULevelSequence*              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class ULevelSequence* ALevelSequenceActor::LoadSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "LoadSequence");

	Params::ALevelSequenceActor_LoadSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// class ULevelSequencePlayer*        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class ULevelSequencePlayer* ALevelSequenceActor::GetSequencePlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "GetSequencePlayer");

	Params::ALevelSequenceActor_GetSequencePlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence*              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class ULevelSequence* ALevelSequenceActor::GetSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "GetSequence");

	Params::ALevelSequenceActor_GetSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.FindNamedBindings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        Tag                                                              (Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<struct FMovieSceneObjectBindingID>ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FMovieSceneObjectBindingID> ALevelSequenceActor::FindNamedBindings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "FindNamedBindings");

	Params::ALevelSequenceActor_FindNamedBindings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.FindNamedBinding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        Tag                                                              (Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FMovieSceneObjectBindingID  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FMovieSceneObjectBindingID ALevelSequenceActor::FindNamedBinding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "FindNamedBinding");

	Params::ALevelSequenceActor_FindNamedBinding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.AddBindingByTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        BindingTag                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, InstancedReference, SubobjectReference)
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// bool                               bAllowBindingsFromAsset                                          (BlueprintVisible, Net, EditFixedSize, InstancedReference, SubobjectReference)

void ALevelSequenceActor::AddBindingByTag(class FName BindingTag, class AActor** Actor, bool bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "AddBindingByTag");

	Params::ALevelSequenceActor_AddBindingByTag_Params Parms{};

	Parms.BindingTag = BindingTag;
	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

}


// Function LevelSequence.LevelSequenceActor.AddBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  Binding                                                          (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// bool                               bAllowBindingsFromAsset                                          (BlueprintVisible, Net, EditFixedSize, InstancedReference, SubobjectReference)

struct FMovieSceneObjectBindingID ALevelSequenceActor::AddBinding(class AActor** Actor, bool bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "AddBinding");

	Params::ALevelSequenceActor_AddBinding_Params Parms{};

	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	return Parms.ReturnValue;

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
// class UObject*                     InSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void ULevelSequenceBurnIn::SetSettings(class UObject* InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceBurnIn", "SetSettings");

	Params::ULevelSequenceBurnIn_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UClass*                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UClass* ULevelSequenceBurnIn::GetSettingsClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceBurnIn", "GetSettingsClass");

	Params::ULevelSequenceBurnIn_GetSettingsClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// class UMovieSceneSequence*         ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UMovieSceneSequence* ULevelSequenceDirector::GetSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetSequence");

	Params::ULevelSequenceDirector_GetSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetRootSequenceTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FQualifiedFrameTime ULevelSequenceDirector::GetRootSequenceTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetRootSequenceTime");

	Params::ULevelSequenceDirector_GetRootSequenceTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetMasterSequenceTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FQualifiedFrameTime ULevelSequenceDirector::GetMasterSequenceTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetMasterSequenceTime");

	Params::ULevelSequenceDirector_GetMasterSequenceTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetCurrentTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FQualifiedFrameTime ULevelSequenceDirector::GetCurrentTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetCurrentTime");

	Params::ULevelSequenceDirector_GetCurrentTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetBoundObjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UObject*>             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<class UObject*> ULevelSequenceDirector::GetBoundObjects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetBoundObjects");

	Params::ULevelSequenceDirector_GetBoundObjects_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetBoundObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* ULevelSequenceDirector::GetBoundObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetBoundObject");

	Params::ULevelSequenceDirector_GetBoundObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetBoundActors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class AActor*>              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<class AActor*> ULevelSequenceDirector::GetBoundActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetBoundActors");

	Params::ULevelSequenceDirector_GetBoundActors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetBoundActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class AActor*                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class AActor* ULevelSequenceDirector::GetBoundActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetBoundActor");

	Params::ULevelSequenceDirector_GetBoundActor_Params Parms{};


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
// class UCameraComponent*            ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UCameraComponent* ULevelSequencePlayer::GetActiveCameraComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequencePlayer", "GetActiveCameraComponent");

	Params::ULevelSequencePlayer_GetActiveCameraComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class ULevelSequence*              LevelSequence                                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// struct FMovieSceneSequencePlaybackSettingsSettings                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class ALevelSequenceActor*         OutActor                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class ULevelSequencePlayer*        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class ULevelSequencePlayer* ULevelSequencePlayer::CreateLevelSequencePlayer(class UObject** WorldContextObject, class ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings* Settings, class ALevelSequenceActor* OutActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequencePlayer", "CreateLevelSequencePlayer");

	Params::ULevelSequencePlayer_CreateLevelSequencePlayer_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.OutActor = OutActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (Settings != nullptr)
		*Settings = std::move(Parms.Settings);

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
// float                              DesyncThresholdSeconds                                           (BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

void ALevelSequenceMediaController::SynchronizeToServer(float DesyncThresholdSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceMediaController", "SynchronizeToServer");

	Params::ALevelSequenceMediaController_SynchronizeToServer_Params Parms{};

	Parms.DesyncThresholdSeconds = DesyncThresholdSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class ALevelSequenceActor*         ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class ALevelSequenceActor* ALevelSequenceMediaController::GetSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceMediaController", "GetSequence");

	Params::ALevelSequenceMediaController_GetSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceMediaController.GetMediaComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaComponent*             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UMediaComponent* ALevelSequenceMediaController::GetMediaComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceMediaController", "GetMediaComponent");

	Params::ALevelSequenceMediaController_GetMediaComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


