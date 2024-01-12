#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SequencerScripting.MovieSceneScriptingKey
// (None)

class UClass* UMovieSceneScriptingKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingKey");

	return Clss;
}


// MovieSceneScriptingKey SequencerScripting.Default__MovieSceneScriptingKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingKey* UMovieSceneScriptingKey::GetDefaultObj()
{
	static class UMovieSceneScriptingKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingKey*>(UMovieSceneScriptingKey::StaticClass()->DefaultObject);

	return Default;
}


// Class SequencerScripting.MovieSceneScriptingActorReferenceKey
// (None)

class UClass* UMovieSceneScriptingActorReferenceKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingActorReferenceKey");

	return Clss;
}


// MovieSceneScriptingActorReferenceKey SequencerScripting.Default__MovieSceneScriptingActorReferenceKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingActorReferenceKey* UMovieSceneScriptingActorReferenceKey::GetDefaultObj()
{
	static class UMovieSceneScriptingActorReferenceKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingActorReferenceKey*>(UMovieSceneScriptingActorReferenceKey::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  InNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FMovieSceneObjectBindingID UMovieSceneScriptingActorReferenceKey::SetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceKey", "SetValue");

	Params::UMovieSceneScriptingActorReferenceKey_SetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                NewFrameNumber                                                   (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SubFrame                                                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ESequenceTimeUnit UMovieSceneScriptingActorReferenceKey::SetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceKey", "SetTime");

	Params::UMovieSceneScriptingActorReferenceKey_SetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneObjectBindingID  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FMovieSceneObjectBindingID UMovieSceneScriptingActorReferenceKey::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceKey", "GetValue");

	Params::UMovieSceneScriptingActorReferenceKey_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameTime                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameTime UMovieSceneScriptingActorReferenceKey::GetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceKey", "GetTime");

	Params::UMovieSceneScriptingActorReferenceKey_GetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingChannel
// (None)

class UClass* UMovieSceneScriptingChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingChannel");

	return Clss;
}


// MovieSceneScriptingChannel SequencerScripting.Default__MovieSceneScriptingChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingChannel* UMovieSceneScriptingChannel::GetDefaultObj()
{
	static class UMovieSceneScriptingChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingChannel*>(UMovieSceneScriptingChannel::StaticClass()->DefaultObject);

	return Default;
}


// Class SequencerScripting.MovieSceneScriptingActorReferenceChannel
// (None)

class UClass* UMovieSceneScriptingActorReferenceChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingActorReferenceChannel");

	return Clss;
}


// MovieSceneScriptingActorReferenceChannel SequencerScripting.Default__MovieSceneScriptingActorReferenceChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingActorReferenceChannel* UMovieSceneScriptingActorReferenceChannel::GetDefaultObj()
{
	static class UMovieSceneScriptingActorReferenceChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingActorReferenceChannel*>(UMovieSceneScriptingActorReferenceChannel::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  InDefaultValue                                                   (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FMovieSceneObjectBindingID UMovieSceneScriptingActorReferenceChannel::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceChannel", "SetDefault");

	Params::UMovieSceneScriptingActorReferenceChannel_SetDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey*     Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UMovieSceneScriptingActorReferenceChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceChannel", "RemoveKey");

	Params::UMovieSceneScriptingActorReferenceChannel_RemoveKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneScriptingActorReferenceChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceChannel", "RemoveDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneScriptingActorReferenceChannel::HasDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceChannel", "HasDefault");

	Params::UMovieSceneScriptingActorReferenceChannel_HasDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingActorReferenceChannel::GetKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceChannel", "GetKeys");

	Params::UMovieSceneScriptingActorReferenceChannel_GetKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneObjectBindingID  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FMovieSceneObjectBindingID UMovieSceneScriptingActorReferenceChannel::GetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceChannel", "GetDefault");

	Params::UMovieSceneScriptingActorReferenceChannel_GetDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InTime                                                           (Edit, ExportObject, Net, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FMovieSceneObjectBindingID  NewValue                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              SubFrame                                                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneScriptingActorReferenceKey*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneScriptingActorReferenceKey* UMovieSceneScriptingActorReferenceChannel::AddKey(const struct FFrameNumber& InTime, const struct FMovieSceneObjectBindingID& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceChannel", "AddKey");

	Params::UMovieSceneScriptingActorReferenceChannel_AddKey_Params Parms{};

	Parms.InTime = InTime;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingBoolKey
// (None)

class UClass* UMovieSceneScriptingBoolKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingBoolKey");

	return Clss;
}


// MovieSceneScriptingBoolKey SequencerScripting.Default__MovieSceneScriptingBoolKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingBoolKey* UMovieSceneScriptingBoolKey::GetDefaultObj()
{
	static class UMovieSceneScriptingBoolKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingBoolKey*>(UMovieSceneScriptingBoolKey::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingBoolKey.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UMovieSceneScriptingBoolKey::SetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolKey", "SetValue");

	Params::UMovieSceneScriptingBoolKey_SetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingBoolKey.SetTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                NewFrameNumber                                                   (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SubFrame                                                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ESequenceTimeUnit UMovieSceneScriptingBoolKey::SetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolKey", "SetTime");

	Params::UMovieSceneScriptingBoolKey_SetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingBoolKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneScriptingBoolKey::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolKey", "GetValue");

	Params::UMovieSceneScriptingBoolKey_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingBoolKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameTime                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameTime UMovieSceneScriptingBoolKey::GetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolKey", "GetTime");

	Params::UMovieSceneScriptingBoolKey_GetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingBoolChannel
// (None)

class UClass* UMovieSceneScriptingBoolChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingBoolChannel");

	return Clss;
}


// MovieSceneScriptingBoolChannel SequencerScripting.Default__MovieSceneScriptingBoolChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingBoolChannel* UMovieSceneScriptingBoolChannel::GetDefaultObj()
{
	static class UMovieSceneScriptingBoolChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingBoolChannel*>(UMovieSceneScriptingBoolChannel::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InDefaultValue                                                   (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UMovieSceneScriptingBoolChannel::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "SetDefault");

	Params::UMovieSceneScriptingBoolChannel_SetDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey*     Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UMovieSceneScriptingBoolChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "RemoveKey");

	Params::UMovieSceneScriptingBoolChannel_RemoveKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneScriptingBoolChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "RemoveDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneScriptingBoolChannel::HasDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "HasDefault");

	Params::UMovieSceneScriptingBoolChannel_HasDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneScriptingBoolChannel::GetNumKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "GetNumKeys");

	Params::UMovieSceneScriptingBoolChannel_GetNumKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingBoolChannel::GetKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "GetKeys");

	Params::UMovieSceneScriptingBoolChannel_GetKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneScriptingBoolChannel::GetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "GetDefault");

	Params::UMovieSceneScriptingBoolChannel_GetDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FFrameRate                  FrameRate                                                        (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
// TArray<bool>                       ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<bool> UMovieSceneScriptingBoolChannel::EvaluateKeys(const struct FSequencerScriptingRange& Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "EvaluateKeys");

	Params::UMovieSceneScriptingBoolChannel_EvaluateKeys_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSequencerScriptingRange    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequencerScriptingRange UMovieSceneScriptingBoolChannel::ComputeEffectiveRange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "ComputeEffectiveRange");

	Params::UMovieSceneScriptingBoolChannel_ComputeEffectiveRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingBoolChannel.AddKey
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InTime                                                           (Edit, ExportObject, Net, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               NewValue                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              SubFrame                                                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneScriptingBoolKey* ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneScriptingBoolKey* UMovieSceneScriptingBoolChannel::AddKey(const struct FFrameNumber& InTime, bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "AddKey");

	Params::UMovieSceneScriptingBoolChannel_AddKey_Params Parms{};

	Parms.InTime = InTime;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingByteKey
// (None)

class UClass* UMovieSceneScriptingByteKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingByteKey");

	return Clss;
}


// MovieSceneScriptingByteKey SequencerScripting.Default__MovieSceneScriptingByteKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingByteKey* UMovieSceneScriptingByteKey::GetDefaultObj()
{
	static class UMovieSceneScriptingByteKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingByteKey*>(UMovieSceneScriptingByteKey::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingByteKey.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              InNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

uint8 UMovieSceneScriptingByteKey::SetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteKey", "SetValue");

	Params::UMovieSceneScriptingByteKey_SetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingByteKey.SetTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                NewFrameNumber                                                   (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SubFrame                                                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ESequenceTimeUnit UMovieSceneScriptingByteKey::SetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteKey", "SetTime");

	Params::UMovieSceneScriptingByteKey_SetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingByteKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

uint8 UMovieSceneScriptingByteKey::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteKey", "GetValue");

	Params::UMovieSceneScriptingByteKey_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingByteKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameTime                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameTime UMovieSceneScriptingByteKey::GetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteKey", "GetTime");

	Params::UMovieSceneScriptingByteKey_GetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingByteChannel
// (None)

class UClass* UMovieSceneScriptingByteChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingByteChannel");

	return Clss;
}


// MovieSceneScriptingByteChannel SequencerScripting.Default__MovieSceneScriptingByteChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingByteChannel* UMovieSceneScriptingByteChannel::GetDefaultObj()
{
	static class UMovieSceneScriptingByteChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingByteChannel*>(UMovieSceneScriptingByteChannel::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingByteChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              InDefaultValue                                                   (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

uint8 UMovieSceneScriptingByteChannel::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteChannel", "SetDefault");

	Params::UMovieSceneScriptingByteChannel_SetDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey*     Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UMovieSceneScriptingByteChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteChannel", "RemoveKey");

	Params::UMovieSceneScriptingByteChannel_RemoveKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneScriptingByteChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteChannel", "RemoveDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingByteChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneScriptingByteChannel::HasDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteChannel", "HasDefault");

	Params::UMovieSceneScriptingByteChannel_HasDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingByteChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingByteChannel::GetKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteChannel", "GetKeys");

	Params::UMovieSceneScriptingByteChannel_GetKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingByteChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

uint8 UMovieSceneScriptingByteChannel::GetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteChannel", "GetDefault");

	Params::UMovieSceneScriptingByteChannel_GetDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingByteChannel.AddKey
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InTime                                                           (Edit, ExportObject, Net, DisableEditOnInstance, EditConst, SubobjectReference)
// uint8                              NewValue                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              SubFrame                                                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EMovieSceneKeyInterpolationInInterpolation                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneScriptingByteKey* ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneScriptingByteKey* UMovieSceneScriptingByteChannel::AddKey(const struct FFrameNumber& InTime, uint8 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingByteChannel", "AddKey");

	Params::UMovieSceneScriptingByteChannel_AddKey_Params Parms{};

	Parms.InTime = InTime;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingDoubleKey
// (None)

class UClass* UMovieSceneScriptingDoubleKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingDoubleKey");

	return Clss;
}


// MovieSceneScriptingDoubleKey SequencerScripting.Default__MovieSceneScriptingDoubleKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingDoubleKey* UMovieSceneScriptingDoubleKey::GetDefaultObj()
{
	static class UMovieSceneScriptingDoubleKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingDoubleKey*>(UMovieSceneScriptingDoubleKey::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// double                             InNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

double UMovieSceneScriptingDoubleKey::SetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetValue");

	Params::UMovieSceneScriptingDoubleKey_SetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                NewFrameNumber                                                   (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SubFrame                                                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ESequenceTimeUnit UMovieSceneScriptingDoubleKey::SetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetTime");

	Params::UMovieSceneScriptingDoubleKey_SetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentWeightMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERichCurveTangentWeightModeInNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ERichCurveTangentWeightMode UMovieSceneScriptingDoubleKey::SetTangentWeightMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetTangentWeightMode");

	Params::UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERichCurveTangentMode   InNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ERichCurveTangentMode UMovieSceneScriptingDoubleKey::SetTangentMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetTangentMode");

	Params::UMovieSceneScriptingDoubleKey_SetTangentMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangentWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UMovieSceneScriptingDoubleKey::SetLeaveTangentWeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetLeaveTangentWeight");

	Params::UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UMovieSceneScriptingDoubleKey::SetLeaveTangent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetLeaveTangent");

	Params::UMovieSceneScriptingDoubleKey_SetLeaveTangent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetInterpolationMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERichCurveInterpMode    InNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ERichCurveInterpMode UMovieSceneScriptingDoubleKey::SetInterpolationMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetInterpolationMode");

	Params::UMovieSceneScriptingDoubleKey_SetInterpolationMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangentWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UMovieSceneScriptingDoubleKey::SetArriveTangentWeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetArriveTangentWeight");

	Params::UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UMovieSceneScriptingDoubleKey::SetArriveTangent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetArriveTangent");

	Params::UMovieSceneScriptingDoubleKey_SetArriveTangent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

double UMovieSceneScriptingDoubleKey::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetValue");

	Params::UMovieSceneScriptingDoubleKey_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameTime                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameTime UMovieSceneScriptingDoubleKey::GetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetTime");

	Params::UMovieSceneScriptingDoubleKey_GetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentWeightMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERichCurveTangentWeightModeReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ERichCurveTangentWeightMode UMovieSceneScriptingDoubleKey::GetTangentWeightMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetTangentWeightMode");

	Params::UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERichCurveTangentMode   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ERichCurveTangentMode UMovieSceneScriptingDoubleKey::GetTangentMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetTangentMode");

	Params::UMovieSceneScriptingDoubleKey_GetTangentMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangentWeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneScriptingDoubleKey::GetLeaveTangentWeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetLeaveTangentWeight");

	Params::UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneScriptingDoubleKey::GetLeaveTangent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetLeaveTangent");

	Params::UMovieSceneScriptingDoubleKey_GetLeaveTangent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetInterpolationMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERichCurveInterpMode    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ERichCurveInterpMode UMovieSceneScriptingDoubleKey::GetInterpolationMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetInterpolationMode");

	Params::UMovieSceneScriptingDoubleKey_GetInterpolationMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangentWeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneScriptingDoubleKey::GetArriveTangentWeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetArriveTangentWeight");

	Params::UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneScriptingDoubleKey::GetArriveTangent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetArriveTangent");

	Params::UMovieSceneScriptingDoubleKey_GetArriveTangent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingDoubleChannel
// (None)

class UClass* UMovieSceneScriptingDoubleChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingDoubleChannel");

	return Clss;
}


// MovieSceneScriptingDoubleChannel SequencerScripting.Default__MovieSceneScriptingDoubleChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingDoubleChannel* UMovieSceneScriptingDoubleChannel::GetDefaultObj()
{
	static class UMovieSceneScriptingDoubleChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingDoubleChannel*>(UMovieSceneScriptingDoubleChannel::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPreInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERichCurveExtrapolation InExtrapolation                                                  (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ERichCurveExtrapolation UMovieSceneScriptingDoubleChannel::SetPreInfinityExtrapolation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "SetPreInfinityExtrapolation");

	Params::UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPostInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERichCurveExtrapolation InExtrapolation                                                  (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ERichCurveExtrapolation UMovieSceneScriptingDoubleChannel::SetPostInfinityExtrapolation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "SetPostInfinityExtrapolation");

	Params::UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// double                             InDefaultValue                                                   (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

double UMovieSceneScriptingDoubleChannel::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "SetDefault");

	Params::UMovieSceneScriptingDoubleChannel_SetDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey*     Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UMovieSceneScriptingDoubleChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "RemoveKey");

	Params::UMovieSceneScriptingDoubleChannel_RemoveKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneScriptingDoubleChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "RemoveDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneScriptingDoubleChannel::HasDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "HasDefault");

	Params::UMovieSceneScriptingDoubleChannel_HasDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPreInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERichCurveExtrapolation ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ERichCurveExtrapolation UMovieSceneScriptingDoubleChannel::GetPreInfinityExtrapolation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "GetPreInfinityExtrapolation");

	Params::UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPostInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERichCurveExtrapolation ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ERichCurveExtrapolation UMovieSceneScriptingDoubleChannel::GetPostInfinityExtrapolation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "GetPostInfinityExtrapolation");

	Params::UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetNumKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneScriptingDoubleChannel::GetNumKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "GetNumKeys");

	Params::UMovieSceneScriptingDoubleChannel_GetNumKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingDoubleChannel::GetKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "GetKeys");

	Params::UMovieSceneScriptingDoubleChannel_GetKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

double UMovieSceneScriptingDoubleChannel::GetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "GetDefault");

	Params::UMovieSceneScriptingDoubleChannel_GetDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.EvaluateKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FFrameRate                  FrameRate                                                        (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
// TArray<double>                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<double> UMovieSceneScriptingDoubleChannel::EvaluateKeys(const struct FSequencerScriptingRange& Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "EvaluateKeys");

	Params::UMovieSceneScriptingDoubleChannel_EvaluateKeys_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.ComputeEffectiveRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSequencerScriptingRange    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequencerScriptingRange UMovieSceneScriptingDoubleChannel::ComputeEffectiveRange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "ComputeEffectiveRange");

	Params::UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingDoubleChannel.AddKey
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InTime                                                           (Edit, ExportObject, Net, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             NewValue                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              SubFrame                                                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EMovieSceneKeyInterpolationInInterpolation                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneScriptingDoubleKey*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneScriptingDoubleKey* UMovieSceneScriptingDoubleChannel::AddKey(const struct FFrameNumber& InTime, double NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "AddKey");

	Params::UMovieSceneScriptingDoubleChannel_AddKey_Params Parms{};

	Parms.InTime = InTime;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingEventKey
// (None)

class UClass* UMovieSceneScriptingEventKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingEventKey");

	return Clss;
}


// MovieSceneScriptingEventKey SequencerScripting.Default__MovieSceneScriptingEventKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingEventKey* UMovieSceneScriptingEventKey::GetDefaultObj()
{
	static class UMovieSceneScriptingEventKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingEventKey*>(UMovieSceneScriptingEventKey::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingEventKey.SetValue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneEvent            InNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FMovieSceneEvent UMovieSceneScriptingEventKey::SetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingEventKey", "SetValue");

	Params::UMovieSceneScriptingEventKey_SetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingEventKey.SetTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                NewFrameNumber                                                   (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SubFrame                                                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ESequenceTimeUnit UMovieSceneScriptingEventKey::SetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingEventKey", "SetTime");

	Params::UMovieSceneScriptingEventKey_SetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingEventKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneEvent            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FMovieSceneEvent UMovieSceneScriptingEventKey::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingEventKey", "GetValue");

	Params::UMovieSceneScriptingEventKey_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingEventKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameTime                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameTime UMovieSceneScriptingEventKey::GetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingEventKey", "GetTime");

	Params::UMovieSceneScriptingEventKey_GetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingEventChannel
// (None)

class UClass* UMovieSceneScriptingEventChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingEventChannel");

	return Clss;
}


// MovieSceneScriptingEventChannel SequencerScripting.Default__MovieSceneScriptingEventChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingEventChannel* UMovieSceneScriptingEventChannel::GetDefaultObj()
{
	static class UMovieSceneScriptingEventChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingEventChannel*>(UMovieSceneScriptingEventChannel::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey*     Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UMovieSceneScriptingEventChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingEventChannel", "RemoveKey");

	Params::UMovieSceneScriptingEventChannel_RemoveKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingEventChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingEventChannel::GetKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingEventChannel", "GetKeys");

	Params::UMovieSceneScriptingEventChannel_GetKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingEventChannel.AddKey
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InTime                                                           (Edit, ExportObject, Net, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FMovieSceneEvent            NewValue                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              SubFrame                                                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneScriptingEventKey*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneScriptingEventKey* UMovieSceneScriptingEventChannel::AddKey(const struct FFrameNumber& InTime, const struct FMovieSceneEvent& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingEventChannel", "AddKey");

	Params::UMovieSceneScriptingEventChannel_AddKey_Params Parms{};

	Parms.InTime = InTime;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingFloatKey
// (None)

class UClass* UMovieSceneScriptingFloatKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingFloatKey");

	return Clss;
}


// MovieSceneScriptingFloatKey SequencerScripting.Default__MovieSceneScriptingFloatKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingFloatKey* UMovieSceneScriptingFloatKey::GetDefaultObj()
{
	static class UMovieSceneScriptingFloatKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingFloatKey*>(UMovieSceneScriptingFloatKey::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetValue
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UMovieSceneScriptingFloatKey::SetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetValue");

	Params::UMovieSceneScriptingFloatKey_SetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetTime
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                NewFrameNumber                                                   (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SubFrame                                                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ESequenceTimeUnit UMovieSceneScriptingFloatKey::SetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetTime");

	Params::UMovieSceneScriptingFloatKey_SetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class ERichCurveTangentWeightModeInNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ERichCurveTangentWeightMode UMovieSceneScriptingFloatKey::SetTangentWeightMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetTangentWeightMode");

	Params::UMovieSceneScriptingFloatKey_SetTangentWeightMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class ERichCurveTangentMode   InNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ERichCurveTangentMode UMovieSceneScriptingFloatKey::SetTangentMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetTangentMode");

	Params::UMovieSceneScriptingFloatKey_SetTangentMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UMovieSceneScriptingFloatKey::SetLeaveTangentWeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetLeaveTangentWeight");

	Params::UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UMovieSceneScriptingFloatKey::SetLeaveTangent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetLeaveTangent");

	Params::UMovieSceneScriptingFloatKey_SetLeaveTangent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class ERichCurveInterpMode    InNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ERichCurveInterpMode UMovieSceneScriptingFloatKey::SetInterpolationMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetInterpolationMode");

	Params::UMovieSceneScriptingFloatKey_SetInterpolationMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UMovieSceneScriptingFloatKey::SetArriveTangentWeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetArriveTangentWeight");

	Params::UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UMovieSceneScriptingFloatKey::SetArriveTangent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetArriveTangent");

	Params::UMovieSceneScriptingFloatKey_SetArriveTangent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetValue
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneScriptingFloatKey::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetValue");

	Params::UMovieSceneScriptingFloatKey_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameTime                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameTime UMovieSceneScriptingFloatKey::GetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetTime");

	Params::UMovieSceneScriptingFloatKey_GetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERichCurveTangentWeightModeReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ERichCurveTangentWeightMode UMovieSceneScriptingFloatKey::GetTangentWeightMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetTangentWeightMode");

	Params::UMovieSceneScriptingFloatKey_GetTangentWeightMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERichCurveTangentMode   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ERichCurveTangentMode UMovieSceneScriptingFloatKey::GetTangentMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetTangentMode");

	Params::UMovieSceneScriptingFloatKey_GetTangentMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneScriptingFloatKey::GetLeaveTangentWeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetLeaveTangentWeight");

	Params::UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneScriptingFloatKey::GetLeaveTangent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetLeaveTangent");

	Params::UMovieSceneScriptingFloatKey_GetLeaveTangent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERichCurveInterpMode    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ERichCurveInterpMode UMovieSceneScriptingFloatKey::GetInterpolationMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetInterpolationMode");

	Params::UMovieSceneScriptingFloatKey_GetInterpolationMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneScriptingFloatKey::GetArriveTangentWeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetArriveTangentWeight");

	Params::UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneScriptingFloatKey::GetArriveTangent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetArriveTangent");

	Params::UMovieSceneScriptingFloatKey_GetArriveTangent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingActualFloatKey
// (None)

class UClass* UMovieSceneScriptingActualFloatKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingActualFloatKey");

	return Clss;
}


// MovieSceneScriptingActualFloatKey SequencerScripting.Default__MovieSceneScriptingActualFloatKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingActualFloatKey* UMovieSceneScriptingActualFloatKey::GetDefaultObj()
{
	static class UMovieSceneScriptingActualFloatKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingActualFloatKey*>(UMovieSceneScriptingActualFloatKey::StaticClass()->DefaultObject);

	return Default;
}


// Class SequencerScripting.MovieSceneScriptingDoubleAsFloatKey
// (None)

class UClass* UMovieSceneScriptingDoubleAsFloatKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingDoubleAsFloatKey");

	return Clss;
}


// MovieSceneScriptingDoubleAsFloatKey SequencerScripting.Default__MovieSceneScriptingDoubleAsFloatKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingDoubleAsFloatKey* UMovieSceneScriptingDoubleAsFloatKey::GetDefaultObj()
{
	static class UMovieSceneScriptingDoubleAsFloatKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingDoubleAsFloatKey*>(UMovieSceneScriptingDoubleAsFloatKey::StaticClass()->DefaultObject);

	return Default;
}


// Class SequencerScripting.MovieSceneScriptingFloatChannel
// (None)

class UClass* UMovieSceneScriptingFloatChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingFloatChannel");

	return Clss;
}


// MovieSceneScriptingFloatChannel SequencerScripting.Default__MovieSceneScriptingFloatChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingFloatChannel* UMovieSceneScriptingFloatChannel::GetDefaultObj()
{
	static class UMovieSceneScriptingFloatChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingFloatChannel*>(UMovieSceneScriptingFloatChannel::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERichCurveExtrapolation InExtrapolation                                                  (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ERichCurveExtrapolation UMovieSceneScriptingFloatChannel::SetPreInfinityExtrapolation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "SetPreInfinityExtrapolation");

	Params::UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERichCurveExtrapolation InExtrapolation                                                  (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ERichCurveExtrapolation UMovieSceneScriptingFloatChannel::SetPostInfinityExtrapolation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "SetPostInfinityExtrapolation");

	Params::UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDefaultValue                                                   (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UMovieSceneScriptingFloatChannel::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "SetDefault");

	Params::UMovieSceneScriptingFloatChannel_SetDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey*     Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UMovieSceneScriptingFloatChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "RemoveKey");

	Params::UMovieSceneScriptingFloatChannel_RemoveKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneScriptingFloatChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "RemoveDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneScriptingFloatChannel::HasDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "HasDefault");

	Params::UMovieSceneScriptingFloatChannel_HasDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERichCurveExtrapolation ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ERichCurveExtrapolation UMovieSceneScriptingFloatChannel::GetPreInfinityExtrapolation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "GetPreInfinityExtrapolation");

	Params::UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERichCurveExtrapolation ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ERichCurveExtrapolation UMovieSceneScriptingFloatChannel::GetPostInfinityExtrapolation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "GetPostInfinityExtrapolation");

	Params::UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneScriptingFloatChannel::GetNumKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "GetNumKeys");

	Params::UMovieSceneScriptingFloatChannel_GetNumKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingFloatChannel::GetKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "GetKeys");

	Params::UMovieSceneScriptingFloatChannel_GetKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneScriptingFloatChannel::GetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "GetDefault");

	Params::UMovieSceneScriptingFloatChannel_GetDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FFrameRate                  FrameRate                                                        (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
// TArray<float>                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<float> UMovieSceneScriptingFloatChannel::EvaluateKeys(const struct FSequencerScriptingRange& Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "EvaluateKeys");

	Params::UMovieSceneScriptingFloatChannel_EvaluateKeys_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSequencerScriptingRange    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequencerScriptingRange UMovieSceneScriptingFloatChannel::ComputeEffectiveRange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "ComputeEffectiveRange");

	Params::UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingFloatChannel.AddKey
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InTime                                                           (Edit, ExportObject, Net, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              NewValue                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              SubFrame                                                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EMovieSceneKeyInterpolationInInterpolation                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneScriptingFloatKey*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneScriptingFloatKey* UMovieSceneScriptingFloatChannel::AddKey(const struct FFrameNumber& InTime, float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "AddKey");

	Params::UMovieSceneScriptingFloatChannel_AddKey_Params Parms{};

	Parms.InTime = InTime;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingIntegerKey
// (None)

class UClass* UMovieSceneScriptingIntegerKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingIntegerKey");

	return Clss;
}


// MovieSceneScriptingIntegerKey SequencerScripting.Default__MovieSceneScriptingIntegerKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingIntegerKey* UMovieSceneScriptingIntegerKey::GetDefaultObj()
{
	static class UMovieSceneScriptingIntegerKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingIntegerKey*>(UMovieSceneScriptingIntegerKey::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingIntegerKey.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UMovieSceneScriptingIntegerKey::SetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerKey", "SetValue");

	Params::UMovieSceneScriptingIntegerKey_SetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingIntegerKey.SetTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                NewFrameNumber                                                   (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SubFrame                                                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ESequenceTimeUnit UMovieSceneScriptingIntegerKey::SetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerKey", "SetTime");

	Params::UMovieSceneScriptingIntegerKey_SetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingIntegerKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneScriptingIntegerKey::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerKey", "GetValue");

	Params::UMovieSceneScriptingIntegerKey_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingIntegerKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameTime                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameTime UMovieSceneScriptingIntegerKey::GetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerKey", "GetTime");

	Params::UMovieSceneScriptingIntegerKey_GetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingIntegerChannel
// (None)

class UClass* UMovieSceneScriptingIntegerChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingIntegerChannel");

	return Clss;
}


// MovieSceneScriptingIntegerChannel SequencerScripting.Default__MovieSceneScriptingIntegerChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingIntegerChannel* UMovieSceneScriptingIntegerChannel::GetDefaultObj()
{
	static class UMovieSceneScriptingIntegerChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingIntegerChannel*>(UMovieSceneScriptingIntegerChannel::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InDefaultValue                                                   (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UMovieSceneScriptingIntegerChannel::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerChannel", "SetDefault");

	Params::UMovieSceneScriptingIntegerChannel_SetDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey*     Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UMovieSceneScriptingIntegerChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerChannel", "RemoveKey");

	Params::UMovieSceneScriptingIntegerChannel_RemoveKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneScriptingIntegerChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerChannel", "RemoveDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneScriptingIntegerChannel::HasDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerChannel", "HasDefault");

	Params::UMovieSceneScriptingIntegerChannel_HasDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingIntegerChannel::GetKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerChannel", "GetKeys");

	Params::UMovieSceneScriptingIntegerChannel_GetKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneScriptingIntegerChannel::GetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerChannel", "GetDefault");

	Params::UMovieSceneScriptingIntegerChannel_GetDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InTime                                                           (Edit, ExportObject, Net, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              NewValue                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              SubFrame                                                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneScriptingIntegerKey*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneScriptingIntegerKey* UMovieSceneScriptingIntegerChannel::AddKey(const struct FFrameNumber& InTime, int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingIntegerChannel", "AddKey");

	Params::UMovieSceneScriptingIntegerChannel_AddKey_Params Parms{};

	Parms.InTime = InTime;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingObjectPathKey
// (None)

class UClass* UMovieSceneScriptingObjectPathKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingObjectPathKey");

	return Clss;
}


// MovieSceneScriptingObjectPathKey SequencerScripting.Default__MovieSceneScriptingObjectPathKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingObjectPathKey* UMovieSceneScriptingObjectPathKey::GetDefaultObj()
{
	static class UMovieSceneScriptingObjectPathKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingObjectPathKey*>(UMovieSceneScriptingObjectPathKey::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UObject* UMovieSceneScriptingObjectPathKey::SetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathKey", "SetValue");

	Params::UMovieSceneScriptingObjectPathKey_SetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                NewFrameNumber                                                   (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SubFrame                                                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ESequenceTimeUnit UMovieSceneScriptingObjectPathKey::SetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathKey", "SetTime");

	Params::UMovieSceneScriptingObjectPathKey_SetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UMovieSceneScriptingObjectPathKey::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathKey", "GetValue");

	Params::UMovieSceneScriptingObjectPathKey_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameTime                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameTime UMovieSceneScriptingObjectPathKey::GetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathKey", "GetTime");

	Params::UMovieSceneScriptingObjectPathKey_GetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingObjectPathChannel
// (None)

class UClass* UMovieSceneScriptingObjectPathChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingObjectPathChannel");

	return Clss;
}


// MovieSceneScriptingObjectPathChannel SequencerScripting.Default__MovieSceneScriptingObjectPathChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingObjectPathChannel* UMovieSceneScriptingObjectPathChannel::GetDefaultObj()
{
	static class UMovieSceneScriptingObjectPathChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingObjectPathChannel*>(UMovieSceneScriptingObjectPathChannel::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InDefaultValue                                                   (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UObject* UMovieSceneScriptingObjectPathChannel::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathChannel", "SetDefault");

	Params::UMovieSceneScriptingObjectPathChannel_SetDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey*     Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UMovieSceneScriptingObjectPathChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathChannel", "RemoveKey");

	Params::UMovieSceneScriptingObjectPathChannel_RemoveKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneScriptingObjectPathChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathChannel", "RemoveDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneScriptingObjectPathChannel::HasDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathChannel", "HasDefault");

	Params::UMovieSceneScriptingObjectPathChannel_HasDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingObjectPathChannel::GetKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathChannel", "GetKeys");

	Params::UMovieSceneScriptingObjectPathChannel_GetKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UMovieSceneScriptingObjectPathChannel::GetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathChannel", "GetDefault");

	Params::UMovieSceneScriptingObjectPathChannel_GetDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InTime                                                           (Edit, ExportObject, Net, DisableEditOnInstance, EditConst, SubobjectReference)
// class UObject*                     NewValue                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              SubFrame                                                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneScriptingObjectPathKey*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneScriptingObjectPathKey* UMovieSceneScriptingObjectPathChannel::AddKey(const struct FFrameNumber& InTime, class UObject* NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathChannel", "AddKey");

	Params::UMovieSceneScriptingObjectPathChannel_AddKey_Params Parms{};

	Parms.InTime = InTime;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingStringKey
// (None)

class UClass* UMovieSceneScriptingStringKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingStringKey");

	return Clss;
}


// MovieSceneScriptingStringKey SequencerScripting.Default__MovieSceneScriptingStringKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingStringKey* UMovieSceneScriptingStringKey::GetDefaultObj()
{
	static class UMovieSceneScriptingStringKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingStringKey*>(UMovieSceneScriptingStringKey::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingStringKey.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InNewValue                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FString UMovieSceneScriptingStringKey::SetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringKey", "SetValue");

	Params::UMovieSceneScriptingStringKey_SetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingStringKey.SetTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                NewFrameNumber                                                   (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SubFrame                                                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class ESequenceTimeUnit UMovieSceneScriptingStringKey::SetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringKey", "SetTime");

	Params::UMovieSceneScriptingStringKey_SetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingStringKey.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UMovieSceneScriptingStringKey::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringKey", "GetValue");

	Params::UMovieSceneScriptingStringKey_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingStringKey.GetTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameTime                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameTime UMovieSceneScriptingStringKey::GetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringKey", "GetTime");

	Params::UMovieSceneScriptingStringKey_GetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneScriptingStringChannel
// (None)

class UClass* UMovieSceneScriptingStringChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneScriptingStringChannel");

	return Clss;
}


// MovieSceneScriptingStringChannel SequencerScripting.Default__MovieSceneScriptingStringChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneScriptingStringChannel* UMovieSceneScriptingStringChannel::GetDefaultObj()
{
	static class UMovieSceneScriptingStringChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneScriptingStringChannel*>(UMovieSceneScriptingStringChannel::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneScriptingStringChannel.SetDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InDefaultValue                                                   (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FString UMovieSceneScriptingStringChannel::SetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringChannel", "SetDefault");

	Params::UMovieSceneScriptingStringChannel_SetDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneScriptingKey*     Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UMovieSceneScriptingStringChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringChannel", "RemoveKey");

	Params::UMovieSceneScriptingStringChannel_RemoveKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneScriptingStringChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringChannel", "RemoveDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneScriptingStringChannel.HasDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneScriptingStringChannel::HasDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringChannel", "HasDefault");

	Params::UMovieSceneScriptingStringChannel_HasDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingStringChannel.GetKeys
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMovieSceneScriptingKey*>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingStringChannel::GetKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringChannel", "GetKeys");

	Params::UMovieSceneScriptingStringChannel_GetKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingStringChannel.GetDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UMovieSceneScriptingStringChannel::GetDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringChannel", "GetDefault");

	Params::UMovieSceneScriptingStringChannel_GetDefault_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneScriptingStringChannel.AddKey
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                InTime                                                           (Edit, ExportObject, Net, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      NewValue                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              SubFrame                                                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESequenceTimeUnit       TimeUnit                                                         (Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneScriptingStringKey*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneScriptingStringKey* UMovieSceneScriptingStringChannel::AddKey(const struct FFrameNumber& InTime, const class FString& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneScriptingStringChannel", "AddKey");

	Params::UMovieSceneScriptingStringChannel_AddKey_Params Parms{};

	Parms.InTime = InTime;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneBindingExtensions
// (None)

class UClass* UMovieSceneBindingExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneBindingExtensions");

	return Clss;
}


// MovieSceneBindingExtensions SequencerScripting.Default__MovieSceneBindingExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneBindingExtensions* UMovieSceneBindingExtensions::GetDefaultObj()
{
	static class UMovieSceneBindingExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneBindingExtensions*>(UMovieSceneBindingExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneBindingExtensions.SetSpawnableBindingID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneObjectBindingID  SpawnableBindingID                                               (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FMovieSceneObjectBindingID UMovieSceneBindingExtensions::SetSpawnableBindingID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "SetSpawnableBindingID");

	Params::UMovieSceneBindingExtensions_SetSpawnableBindingID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneBindingExtensions.SetSortingOrder
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              SortingOrder                                                     (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UMovieSceneBindingExtensions::SetSortingOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "SetSortingOrder");

	Params::UMovieSceneBindingExtensions_SetSortingOrder_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneBindingExtensions.SetParent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneBindingProxy     InParentBinding                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FMovieSceneBindingProxy UMovieSceneBindingExtensions::SetParent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "SetParent");

	Params::UMovieSceneBindingExtensions_SetParent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneBindingExtensions.SetName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      InName                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FString UMovieSceneBindingExtensions::SetName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "SetName");

	Params::UMovieSceneBindingExtensions_SetName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneBindingExtensions.SetDisplayName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        InDisplayName                                                    (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FText UMovieSceneBindingExtensions::SetDisplayName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "SetDisplayName");

	Params::UMovieSceneBindingExtensions_SetDisplayName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneBindingExtensions.RemoveTrack
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneTrack*            TrackToRemove                                                    (ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMovieSceneTrack* UMovieSceneBindingExtensions::RemoveTrack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "RemoveTrack");

	Params::UMovieSceneBindingExtensions_RemoveTrack_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneBindingExtensions.Remove
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FMovieSceneBindingProxy UMovieSceneBindingExtensions::Remove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "Remove");

	Params::UMovieSceneBindingExtensions_Remove_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     SourceBindingId                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneBindingProxy     DestinationBindingId                                             (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FMovieSceneBindingProxy UMovieSceneBindingExtensions::MoveBindingContents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "MoveBindingContents");

	Params::UMovieSceneBindingExtensions_MoveBindingContents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneBindingExtensions.IsValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneBindingExtensions::IsValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "IsValid");

	Params::UMovieSceneBindingExtensions_IsValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneBindingExtensions.GetTracks
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneTrack*> UMovieSceneBindingExtensions::GetTracks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "GetTracks");

	Params::UMovieSceneBindingExtensions_GetTracks_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneBindingExtensions.GetSortingOrder
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneBindingExtensions::GetSortingOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "GetSortingOrder");

	Params::UMovieSceneBindingExtensions_GetSortingOrder_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UClass*                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UMovieSceneBindingExtensions::GetPossessedObjectClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "GetPossessedObjectClass");

	Params::UMovieSceneBindingExtensions_GetPossessedObjectClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneBindingExtensions.GetParent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneBindingProxy     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FMovieSceneBindingProxy UMovieSceneBindingExtensions::GetParent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "GetParent");

	Params::UMovieSceneBindingExtensions_GetParent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UObject*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UMovieSceneBindingExtensions::GetObjectTemplate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "GetObjectTemplate");

	Params::UMovieSceneBindingExtensions_GetObjectTemplate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneBindingExtensions.GetName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UMovieSceneBindingExtensions::GetName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "GetName");

	Params::UMovieSceneBindingExtensions_GetName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneBindingExtensions.GetId
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FGuid                       ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGuid UMovieSceneBindingExtensions::GetId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "GetId");

	Params::UMovieSceneBindingExtensions_GetId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneBindingExtensions.GetDisplayName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UMovieSceneBindingExtensions::GetDisplayName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "GetDisplayName");

	Params::UMovieSceneBindingExtensions_GetDisplayName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FMovieSceneBindingProxy>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FMovieSceneBindingProxy> UMovieSceneBindingExtensions::GetChildPossessables()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "GetChildPossessables");

	Params::UMovieSceneBindingExtensions_GetChildPossessables_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByType
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UClass*                      TrackType                                                        (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneTrack*> UMovieSceneBindingExtensions::FindTracksByType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "FindTracksByType");

	Params::UMovieSceneBindingExtensions_FindTracksByType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UClass*                      TrackType                                                        (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneTrack*> UMovieSceneBindingExtensions::FindTracksByExactType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "FindTracksByExactType");

	Params::UMovieSceneBindingExtensions_FindTracksByExactType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneBindingExtensions.AddTrack
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UClass*                      TrackType                                                        (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneTrack*            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneTrack* UMovieSceneBindingExtensions::AddTrack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneBindingExtensions", "AddTrack");

	Params::UMovieSceneBindingExtensions_AddTrack_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneEventTrackExtensions
// (None)

class UClass* UMovieSceneEventTrackExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneEventTrackExtensions");

	return Clss;
}


// MovieSceneEventTrackExtensions SequencerScripting.Default__MovieSceneEventTrackExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneEventTrackExtensions* UMovieSceneEventTrackExtensions::GetDefaultObj()
{
	static class UMovieSceneEventTrackExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneEventTrackExtensions*>(UMovieSceneEventTrackExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneEventTrackExtensions.GetBoundObjectPropertyClass
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneEvent            EventKey                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UClass*                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UMovieSceneEventTrackExtensions::GetBoundObjectPropertyClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneEventTrackExtensions", "GetBoundObjectPropertyClass");

	Params::UMovieSceneEventTrackExtensions_GetBoundObjectPropertyClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneEventTrack*       InTrack                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneEventTriggerSection*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneEventTriggerSection* UMovieSceneEventTrackExtensions::AddEventTriggerSection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneEventTrackExtensions", "AddEventTriggerSection");

	Params::UMovieSceneEventTrackExtensions_AddEventTriggerSection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneEventTrack*       InTrack                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneEventRepeaterSection*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneEventRepeaterSection* UMovieSceneEventTrackExtensions::AddEventRepeaterSection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneEventTrackExtensions", "AddEventRepeaterSection");

	Params::UMovieSceneEventTrackExtensions_AddEventRepeaterSection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneFolderExtensions
// (None)

class UClass* UMovieSceneFolderExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneFolderExtensions");

	return Clss;
}


// MovieSceneFolderExtensions SequencerScripting.Default__MovieSceneFolderExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneFolderExtensions* UMovieSceneFolderExtensions::GetDefaultObj()
{
	static class UMovieSceneFolderExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneFolderExtensions*>(UMovieSceneFolderExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneFolderExtensions.SetFolderName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
// class FName                        InFolderName                                                     (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneFolderExtensions::SetFolderName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "SetFolderName");

	Params::UMovieSceneFolderExtensions_SetFolderName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.SetFolderColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
// struct FColor                      InFolderColor                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneFolderExtensions::SetFolderColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "SetFolderColor");

	Params::UMovieSceneFolderExtensions_SetFolderColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
// class UMovieSceneTrack*            InTrack                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneFolderExtensions::RemoveChildTrack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "RemoveChildTrack");

	Params::UMovieSceneFolderExtensions_RemoveChildTrack_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
// struct FMovieSceneBindingProxy     InObjectBinding                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneFolderExtensions::RemoveChildObjectBinding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "RemoveChildObjectBinding");

	Params::UMovieSceneFolderExtensions_RemoveChildObjectBinding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
// class UMovieSceneTrack*            InTrack                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneFolderExtensions::RemoveChildMasterTrack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "RemoveChildMasterTrack");

	Params::UMovieSceneFolderExtensions_RemoveChildMasterTrack_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*           TargetFolder                                                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneFolder*           FolderToRemove                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneFolderExtensions::RemoveChildFolder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "RemoveChildFolder");

	Params::UMovieSceneFolderExtensions_RemoveChildFolder_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.GetFolderName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
// class FName                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UMovieSceneFolderExtensions::GetFolderName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "GetFolderName");

	Params::UMovieSceneFolderExtensions_GetFolderName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.GetFolderColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
// struct FColor                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FColor UMovieSceneFolderExtensions::GetFolderColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "GetFolderColor");

	Params::UMovieSceneFolderExtensions_GetFolderColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.GetChildTracks
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneTrack*> UMovieSceneFolderExtensions::GetChildTracks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "GetChildTracks");

	Params::UMovieSceneFolderExtensions_GetChildTracks_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
// TArray<struct FMovieSceneBindingProxy>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FMovieSceneBindingProxy> UMovieSceneFolderExtensions::GetChildObjectBindings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "GetChildObjectBindings");

	Params::UMovieSceneFolderExtensions_GetChildObjectBindings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneTrack*> UMovieSceneFolderExtensions::GetChildMasterTracks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "GetChildMasterTracks");

	Params::UMovieSceneFolderExtensions_GetChildMasterTracks_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.GetChildFolders
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
// TArray<class UMovieSceneFolder*>   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneFolder*> UMovieSceneFolderExtensions::GetChildFolders()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "GetChildFolders");

	Params::UMovieSceneFolderExtensions_GetChildFolders_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.AddChildTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
// class UMovieSceneTrack*            InTrack                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneFolderExtensions::AddChildTrack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "AddChildTrack");

	Params::UMovieSceneFolderExtensions_AddChildTrack_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
// struct FMovieSceneBindingProxy     InObjectBinding                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneFolderExtensions::AddChildObjectBinding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "AddChildObjectBinding");

	Params::UMovieSceneFolderExtensions_AddChildObjectBinding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*           Folder                                                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
// class UMovieSceneTrack*            InTrack                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneFolderExtensions::AddChildMasterTrack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "AddChildMasterTrack");

	Params::UMovieSceneFolderExtensions_AddChildMasterTrack_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneFolderExtensions.AddChildFolder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFolder*           TargetFolder                                                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneFolder*           FolderToAdd                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneFolderExtensions::AddChildFolder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFolderExtensions", "AddChildFolder");

	Params::UMovieSceneFolderExtensions_AddChildFolder_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneMaterialTrackExtensions
// (None)

class UClass* UMovieSceneMaterialTrackExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneMaterialTrackExtensions");

	return Clss;
}


// MovieSceneMaterialTrackExtensions SequencerScripting.Default__MovieSceneMaterialTrackExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneMaterialTrackExtensions* UMovieSceneMaterialTrackExtensions::GetDefaultObj()
{
	static class UMovieSceneMaterialTrackExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneMaterialTrackExtensions*>(UMovieSceneMaterialTrackExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneMaterialTrackExtensions.SetMaterialIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneComponentMaterialTrack*Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MaterialIndex                                                    (BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

int32 UMovieSceneMaterialTrackExtensions::SetMaterialIndex(class UMovieSceneComponentMaterialTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneMaterialTrackExtensions", "SetMaterialIndex");

	Params::UMovieSceneMaterialTrackExtensions_SetMaterialIndex_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneMaterialTrackExtensions.GetMaterialIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneComponentMaterialTrack*Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneMaterialTrackExtensions::GetMaterialIndex(class UMovieSceneComponentMaterialTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneMaterialTrackExtensions", "GetMaterialIndex");

	Params::UMovieSceneMaterialTrackExtensions_GetMaterialIndex_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions
// (None)

class UClass* UMovieScenePrimitiveMaterialTrackExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePrimitiveMaterialTrackExtensions");

	return Clss;
}


// MovieScenePrimitiveMaterialTrackExtensions SequencerScripting.Default__MovieScenePrimitiveMaterialTrackExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScenePrimitiveMaterialTrackExtensions* UMovieScenePrimitiveMaterialTrackExtensions::GetDefaultObj()
{
	static class UMovieScenePrimitiveMaterialTrackExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScenePrimitiveMaterialTrackExtensions*>(UMovieScenePrimitiveMaterialTrackExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.SetMaterialIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieScenePrimitiveMaterialTrack*Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MaterialIndex                                                    (BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

int32 UMovieScenePrimitiveMaterialTrackExtensions::SetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScenePrimitiveMaterialTrackExtensions", "SetMaterialIndex");

	Params::UMovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.GetMaterialIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieScenePrimitiveMaterialTrack*Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieScenePrimitiveMaterialTrackExtensions::GetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScenePrimitiveMaterialTrackExtensions", "GetMaterialIndex");

	Params::UMovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieScenePropertyTrackExtensions
// (None)

class UClass* UMovieScenePropertyTrackExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScenePropertyTrackExtensions");

	return Clss;
}


// MovieScenePropertyTrackExtensions SequencerScripting.Default__MovieScenePropertyTrackExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScenePropertyTrackExtensions* UMovieScenePropertyTrackExtensions::GetDefaultObj()
{
	static class UMovieScenePropertyTrackExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScenePropertyTrackExtensions*>(UMovieScenePropertyTrackExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMovieScenePropertyTrack*    Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InPropertyName                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      InPropertyPath                                                   (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FString UMovieScenePropertyTrackExtensions::SetPropertyNameAndPath(class UMovieScenePropertyTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScenePropertyTrackExtensions", "SetPropertyNameAndPath");

	Params::UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneObjectPropertyTrack*Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UClass*                      PropertyClass                                                    (Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

class UClass* UMovieScenePropertyTrackExtensions::SetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScenePropertyTrackExtensions", "SetObjectPropertyClass");

	Params::UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.SetByteTrackEnum
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneByteTrack*        Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UEnum*                       InEnum                                                           (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UEnum* UMovieScenePropertyTrackExtensions::SetByteTrackEnum(class UMovieSceneByteTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScenePropertyTrackExtensions", "SetByteTrackEnum");

	Params::UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieScenePropertyTrack*    Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UMovieScenePropertyTrackExtensions::GetUniqueTrackName(class UMovieScenePropertyTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScenePropertyTrackExtensions", "GetUniqueTrackName");

	Params::UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieScenePropertyTrack*    Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UMovieScenePropertyTrackExtensions::GetPropertyPath(class UMovieScenePropertyTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScenePropertyTrackExtensions", "GetPropertyPath");

	Params::UMovieScenePropertyTrackExtensions_GetPropertyPath_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieScenePropertyTrack*    Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UMovieScenePropertyTrackExtensions::GetPropertyName(class UMovieScenePropertyTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScenePropertyTrackExtensions", "GetPropertyName");

	Params::UMovieScenePropertyTrackExtensions_GetPropertyName_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneObjectPropertyTrack*Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UClass*                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UClass* UMovieScenePropertyTrackExtensions::GetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScenePropertyTrackExtensions", "GetObjectPropertyClass");

	Params::UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieScenePropertyTrackExtensions.GetByteTrackEnum
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneByteTrack*        Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UEnum*                       ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UEnum* UMovieScenePropertyTrackExtensions::GetByteTrackEnum(class UMovieSceneByteTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieScenePropertyTrackExtensions", "GetByteTrackEnum");

	Params::UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneSectionExtensions
// (None)

class UClass* UMovieSceneSectionExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSectionExtensions");

	return Clss;
}


// MovieSceneSectionExtensions SequencerScripting.Default__MovieSceneSectionExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSectionExtensions* UMovieSceneSectionExtensions::GetDefaultObj()
{
	static class UMovieSceneSectionExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSectionExtensions*>(UMovieSceneSectionExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// float                              StartTime                                                        (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::SetStartFrameSeconds(float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "SetStartFrameSeconds");

	Params::UMovieSceneSectionExtensions_SetStartFrameSeconds_Params Parms{};

	Parms.StartTime = StartTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// bool                               bIsBounded                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UMovieSceneSectionExtensions::SetStartFrameBounded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "SetStartFrameBounded");

	Params::UMovieSceneSectionExtensions_SetStartFrameBounded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// int32                              StartFrame                                                       (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::SetStartFrame(int32 StartFrame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "SetStartFrame");

	Params::UMovieSceneSectionExtensions_SetStartFrame_Params Parms{};

	Parms.StartFrame = StartFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// float                              StartTime                                                        (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              EndTime                                                          (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::SetRangeSeconds(float StartTime, float EndTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "SetRangeSeconds");

	Params::UMovieSceneSectionExtensions_SetRangeSeconds_Params Parms{};

	Parms.StartTime = StartTime;
	Parms.EndTime = EndTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.SetRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// int32                              StartFrame                                                       (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// int32                              EndFrame                                                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::SetRange(int32 StartFrame, int32 EndFrame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "SetRange");

	Params::UMovieSceneSectionExtensions_SetRange_Params Parms{};

	Parms.StartFrame = StartFrame;
	Parms.EndFrame = EndFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// float                              EndTime                                                          (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::SetEndFrameSeconds(float EndTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "SetEndFrameSeconds");

	Params::UMovieSceneSectionExtensions_SetEndFrameSeconds_Params Parms{};

	Parms.EndTime = EndTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// bool                               bIsBounded                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UMovieSceneSectionExtensions::SetEndFrameBounded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "SetEndFrameBounded");

	Params::UMovieSceneSectionExtensions_SetEndFrameBounded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// int32                              EndFrame                                                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

class UMovieSceneSection* UMovieSceneSectionExtensions::SetEndFrame(int32 EndFrame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "SetEndFrame");

	Params::UMovieSceneSectionExtensions_SetEndFrame_Params Parms{};

	Parms.EndFrame = EndFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.HasStartFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneSectionExtensions::HasStartFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "HasStartFrame");

	Params::UMovieSceneSectionExtensions_HasStartFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.HasEndFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneSectionExtensions::HasEndFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "HasEndFrame");

	Params::UMovieSceneSectionExtensions_HasEndFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneSectionExtensions::GetStartFrameSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetStartFrameSeconds");

	Params::UMovieSceneSectionExtensions_GetStartFrameSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneSectionExtensions::GetStartFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetStartFrame");

	Params::UMovieSceneSectionExtensions_GetStartFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSubSection*       Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// int32                              InFrame                                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneSequence*         ParentSequence                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneSectionExtensions::GetParentSequenceFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetParentSequenceFrame");

	Params::UMovieSceneSectionExtensions_GetParentSequenceFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneSectionExtensions::GetEndFrameSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetEndFrameSeconds");

	Params::UMovieSceneSectionExtensions_GetEndFrameSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneSectionExtensions::GetEndFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetEndFrame");

	Params::UMovieSceneSectionExtensions_GetEndFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetChannelsByType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// class UClass*                      ChannelType                                                      (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMovieSceneScriptingChannel*>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::GetChannelsByType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetChannelsByType");

	Params::UMovieSceneSectionExtensions_GetChannelsByType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetChannels
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// TArray<class UMovieSceneScriptingChannel*>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::GetChannels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetChannels");

	Params::UMovieSceneSectionExtensions_GetChannels_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrameSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneSectionExtensions::GetAutoSizeStartFrameSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetAutoSizeStartFrameSeconds");

	Params::UMovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneSectionExtensions::GetAutoSizeStartFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetAutoSizeStartFrame");

	Params::UMovieSceneSectionExtensions_GetAutoSizeStartFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasStartFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneSectionExtensions::GetAutoSizeHasStartFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetAutoSizeHasStartFrame");

	Params::UMovieSceneSectionExtensions_GetAutoSizeHasStartFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasEndFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneSectionExtensions::GetAutoSizeHasEndFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetAutoSizeHasEndFrame");

	Params::UMovieSceneSectionExtensions_GetAutoSizeHasEndFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrameSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneSectionExtensions::GetAutoSizeEndFrameSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetAutoSizeEndFrameSeconds");

	Params::UMovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneSectionExtensions::GetAutoSizeEndFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetAutoSizeEndFrame");

	Params::UMovieSceneSectionExtensions_GetAutoSizeEndFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.GetAllChannels
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// TArray<class UMovieSceneScriptingChannel*>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::GetAllChannels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "GetAllChannels");

	Params::UMovieSceneSectionExtensions_GetAllChannels_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
// class UClass*                      ChannelType                                                      (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMovieSceneScriptingChannel*>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::FindChannelsByType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSectionExtensions", "FindChannelsByType");

	Params::UMovieSceneSectionExtensions_FindChannelsByType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneSequenceExtensions
// (None)

class UClass* UMovieSceneSequenceExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneSequenceExtensions");

	return Clss;
}


// MovieSceneSequenceExtensions SequencerScripting.Default__MovieSceneSequenceExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneSequenceExtensions* UMovieSceneSequenceExtensions::GetDefaultObj()
{
	static class UMovieSceneSequenceExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneSequenceExtensions*>(UMovieSceneSequenceExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UMovieSceneSequence* UMovieSceneSequenceExtensions::SortMarkedFrames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SortMarkedFrames");

	Params::UMovieSceneSequenceExtensions_SortMarkedFrames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              StartTimeInSeconds                                               (Edit, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMovieSceneSequence* UMovieSceneSequenceExtensions::SetWorkRangeStart(float StartTimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetWorkRangeStart");

	Params::UMovieSceneSequenceExtensions_SetWorkRangeStart_Params Parms{};

	Parms.StartTimeInSeconds = StartTimeInSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              EndTimeInSeconds                                                 (ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMovieSceneSequence* UMovieSceneSequenceExtensions::SetWorkRangeEnd(float EndTimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetWorkRangeEnd");

	Params::UMovieSceneSequenceExtensions_SetWorkRangeEnd_Params Parms{};

	Parms.EndTimeInSeconds = EndTimeInSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              StartTimeInSeconds                                               (Edit, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMovieSceneSequence* UMovieSceneSequenceExtensions::SetViewRangeStart(float StartTimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetViewRangeStart");

	Params::UMovieSceneSequenceExtensions_SetViewRangeStart_Params Parms{};

	Parms.StartTimeInSeconds = StartTimeInSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              EndTimeInSeconds                                                 (ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMovieSceneSequence* UMovieSceneSequenceExtensions::SetViewRangeEnd(float EndTimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetViewRangeEnd");

	Params::UMovieSceneSequenceExtensions_SetViewRangeEnd_Params Parms{};

	Parms.EndTimeInSeconds = EndTimeInSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FFrameRate                  TickResolution                                                   (ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSequence* UMovieSceneSequenceExtensions::SetTickResolutionDirectly(const struct FFrameRate& TickResolution)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetTickResolutionDirectly");

	Params::UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Params Parms{};

	Parms.TickResolution = TickResolution;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FFrameRate                  TickResolution                                                   (ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSequence* UMovieSceneSequenceExtensions::SetTickResolution(const struct FFrameRate& TickResolution)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetTickResolution");

	Params::UMovieSceneSequenceExtensions_SetTickResolution_Params Parms{};

	Parms.TickResolution = TickResolution;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               bInReadOnly                                                      (Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMovieSceneSequence* UMovieSceneSequenceExtensions::SetReadOnly(bool bInReadOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetReadOnly");

	Params::UMovieSceneSequenceExtensions_SetReadOnly_Params Parms{};

	Parms.bInReadOnly = bInReadOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              StartTime                                                        (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UMovieSceneSequence* UMovieSceneSequenceExtensions::SetPlaybackStartSeconds(float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetPlaybackStartSeconds");

	Params::UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Params Parms{};

	Parms.StartTime = StartTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              StartFrame                                                       (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

class UMovieSceneSequence* UMovieSceneSequenceExtensions::SetPlaybackStart(int32 StartFrame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetPlaybackStart");

	Params::UMovieSceneSequenceExtensions_SetPlaybackStart_Params Parms{};

	Parms.StartFrame = StartFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              EndTime                                                          (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UMovieSceneSequence* UMovieSceneSequenceExtensions::SetPlaybackEndSeconds(float EndTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetPlaybackEndSeconds");

	Params::UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Params Parms{};

	Parms.EndTime = EndTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              EndFrame                                                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

class UMovieSceneSequence* UMovieSceneSequenceExtensions::SetPlaybackEnd(int32 EndFrame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetPlaybackEnd");

	Params::UMovieSceneSequenceExtensions_SetPlaybackEnd_Params Parms{};

	Parms.EndFrame = EndFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              InMarkIndex                                                      (ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FFrameNumber                InFrameNumber                                                    (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMovieSceneSequence* UMovieSceneSequenceExtensions::SetMarkedFrame(int32 InMarkIndex, const struct FFrameNumber& InFrameNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetMarkedFrame");

	Params::UMovieSceneSequenceExtensions_SetMarkedFrame_Params Parms{};

	Parms.InMarkIndex = InMarkIndex;
	Parms.InFrameNumber = InFrameNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// enum class EMovieSceneEvaluationTypeInEvaluationType                                                 (Edit, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMovieSceneSequence* UMovieSceneSequenceExtensions::SetEvaluationType(enum class EMovieSceneEvaluationType InEvaluationType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetEvaluationType");

	Params::UMovieSceneSequenceExtensions_SetEvaluationType_Params Parms{};

	Parms.InEvaluationType = InEvaluationType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FFrameRate                  DisplayRate                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSequence* UMovieSceneSequenceExtensions::SetDisplayRate(const struct FFrameRate& DisplayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetDisplayRate");

	Params::UMovieSceneSequenceExtensions_SetDisplayRate_Params Parms{};

	Parms.DisplayRate = DisplayRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.SetClockSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// enum class EUpdateClockSource      InClockSource                                                    (Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMovieSceneSequence* UMovieSceneSequenceExtensions::SetClockSource(enum class EUpdateClockSource InClockSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "SetClockSource");

	Params::UMovieSceneSequenceExtensions_SetClockSource_Params Parms{};

	Parms.InClockSource = InClockSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         RootSequence                                                     (ExportObject, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneObjectBindingID  InObjectBindingID                                                (Edit, ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneBindingProxy     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FMovieSceneBindingProxy UMovieSceneSequenceExtensions::ResolveBindingID(class UMovieSceneSequence* RootSequence, const struct FMovieSceneObjectBindingID& InObjectBindingID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "ResolveBindingID");

	Params::UMovieSceneSequenceExtensions_ResolveBindingID_Params Parms{};

	Parms.RootSequence = RootSequence;
	Parms.InObjectBindingID = InObjectBindingID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.RemoveTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UMovieSceneTrack*            Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneSequenceExtensions::RemoveTrack(class UMovieSceneTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "RemoveTrack");

	Params::UMovieSceneSequenceExtensions_RemoveTrack_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.RemoveRootFolderFromSequence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UMovieSceneFolder*           Folder                                                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)

class UMovieSceneFolder* UMovieSceneSequenceExtensions::RemoveRootFolderFromSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "RemoveRootFolderFromSequence");

	Params::UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UMovieSceneTrack*            Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneSequenceExtensions::RemoveMasterTrack(class UMovieSceneTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "RemoveMasterTrack");

	Params::UMovieSceneSequenceExtensions_RemoveMasterTrack_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              StartTime                                                        (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              Duration                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)
// struct FSequencerScriptingRange    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequencerScriptingRange UMovieSceneSequenceExtensions::MakeRangeSeconds(float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "MakeRangeSeconds");

	Params::UMovieSceneSequenceExtensions_MakeRangeSeconds_Params Parms{};

	Parms.StartTime = StartTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.MakeRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              StartFrame                                                       (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// int32                              Duration                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)
// struct FSequencerScriptingRange    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequencerScriptingRange UMovieSceneSequenceExtensions::MakeRange(int32 StartFrame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "MakeRange");

	Params::UMovieSceneSequenceExtensions_MakeRange_Params Parms{};

	Parms.StartFrame = StartFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EMovieSceneObjectBindingSpaceSpace                                                            (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FMovieSceneObjectBindingID  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::MakeBindingID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "MakeBindingID");

	Params::UMovieSceneSequenceExtensions_MakeBindingID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UObject*                     Context                                                          (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<class UObject*>             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UObject*> UMovieSceneSequenceExtensions::LocateBoundObjects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "LocateBoundObjects");

	Params::UMovieSceneSequenceExtensions_LocateBoundObjects_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMovieSceneSequenceExtensions::IsReadOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "IsReadOnly");

	Params::UMovieSceneSequenceExtensions_IsReadOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneSequenceExtensions::GetWorkRangeStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetWorkRangeStart");

	Params::UMovieSceneSequenceExtensions_GetWorkRangeStart_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneSequenceExtensions::GetWorkRangeEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetWorkRangeEnd");

	Params::UMovieSceneSequenceExtensions_GetWorkRangeEnd_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneSequenceExtensions::GetViewRangeStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetViewRangeStart");

	Params::UMovieSceneSequenceExtensions_GetViewRangeStart_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneSequenceExtensions::GetViewRangeEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetViewRangeEnd");

	Params::UMovieSceneSequenceExtensions_GetViewRangeEnd_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetTracks
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneTrack*> UMovieSceneSequenceExtensions::GetTracks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetTracks");

	Params::UMovieSceneSequenceExtensions_GetTracks_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FTimecode                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTimecode UMovieSceneSequenceExtensions::GetTimecodeSource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetTimecodeSource");

	Params::UMovieSceneSequenceExtensions_GetTimecodeSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FFrameRate                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameRate UMovieSceneSequenceExtensions::GetTickResolution()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetTickResolution");

	Params::UMovieSceneSequenceExtensions_GetTickResolution_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<struct FMovieSceneBindingProxy>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FMovieSceneBindingProxy> UMovieSceneSequenceExtensions::GetSpawnables()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetSpawnables");

	Params::UMovieSceneSequenceExtensions_GetSpawnables_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<class UMovieSceneFolder*>   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneFolder*> UMovieSceneSequenceExtensions::GetRootFoldersInSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetRootFoldersInSequence");

	Params::UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetPossessables
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<struct FMovieSceneBindingProxy>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FMovieSceneBindingProxy> UMovieSceneSequenceExtensions::GetPossessables()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetPossessables");

	Params::UMovieSceneSequenceExtensions_GetPossessables_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         RootSequence                                                     (ExportObject, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneSequence*         DestinationSequence                                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneObjectBindingID  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::GetPortableBindingID(class UMovieSceneSequence* RootSequence, class UMovieSceneSequence* DestinationSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetPortableBindingID");

	Params::UMovieSceneSequenceExtensions_GetPortableBindingID_Params Parms{};

	Parms.RootSequence = RootSequence;
	Parms.DestinationSequence = DestinationSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneSequenceExtensions::GetPlaybackStartSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetPlaybackStartSeconds");

	Params::UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneSequenceExtensions::GetPlaybackStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetPlaybackStart");

	Params::UMovieSceneSequenceExtensions_GetPlaybackStart_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FSequencerScriptingRange    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequencerScriptingRange UMovieSceneSequenceExtensions::GetPlaybackRange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetPlaybackRange");

	Params::UMovieSceneSequenceExtensions_GetPlaybackRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UMovieSceneSequenceExtensions::GetPlaybackEndSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetPlaybackEndSeconds");

	Params::UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneSequenceExtensions::GetPlaybackEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetPlaybackEnd");

	Params::UMovieSceneSequenceExtensions_GetPlaybackEnd_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UMovieScene*                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieScene* UMovieSceneSequenceExtensions::GetMovieScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetMovieScene");

	Params::UMovieSceneSequenceExtensions_GetMovieScene_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneTrack*> UMovieSceneSequenceExtensions::GetMasterTracks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetMasterTracks");

	Params::UMovieSceneSequenceExtensions_GetMasterTracks_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<struct FMovieSceneMarkedFrame>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FMovieSceneMarkedFrame> UMovieSceneSequenceExtensions::GetMarkedFrames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetMarkedFrames");

	Params::UMovieSceneSequenceExtensions_GetMarkedFrames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// enum class EMovieSceneEvaluationTypeReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EMovieSceneEvaluationType UMovieSceneSequenceExtensions::GetEvaluationType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetEvaluationType");

	Params::UMovieSceneSequenceExtensions_GetEvaluationType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FFrameRate                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFrameRate UMovieSceneSequenceExtensions::GetDisplayRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetDisplayRate");

	Params::UMovieSceneSequenceExtensions_GetDisplayRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetClockSource
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMovieSceneSequence*         InSequence                                                       (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// enum class EUpdateClockSource      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EUpdateClockSource UMovieSceneSequenceExtensions::GetClockSource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetClockSource");

	Params::UMovieSceneSequenceExtensions_GetClockSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetBindings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<struct FMovieSceneBindingProxy>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<struct FMovieSceneBindingProxy> UMovieSceneSequenceExtensions::GetBindings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetBindings");

	Params::UMovieSceneSequenceExtensions_GetBindings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.GetBindingID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneBindingProxy     InBinding                                                        (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneObjectBindingID  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::GetBindingID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "GetBindingID");

	Params::UMovieSceneSequenceExtensions_GetBindingID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindTracksByType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UClass*                      TrackType                                                        (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneTrack*> UMovieSceneSequenceExtensions::FindTracksByType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "FindTracksByType");

	Params::UMovieSceneSequenceExtensions_FindTracksByType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindTracksByExactType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UClass*                      TrackType                                                        (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneTrack*> UMovieSceneSequenceExtensions::FindTracksByExactType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "FindTracksByExactType");

	Params::UMovieSceneSequenceExtensions_FindTracksByExactType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FFrameNumber                InFrameNumber                                                    (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bForward                                                         (ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneSequenceExtensions::FindNextMarkedFrame(const struct FFrameNumber& InFrameNumber, bool bForward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "FindNextMarkedFrame");

	Params::UMovieSceneSequenceExtensions_FindNextMarkedFrame_Params Parms{};

	Parms.InFrameNumber = InFrameNumber;
	Parms.bForward = bForward;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UClass*                      TrackType                                                        (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneTrack*> UMovieSceneSequenceExtensions::FindMasterTracksByType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "FindMasterTracksByType");

	Params::UMovieSceneSequenceExtensions_FindMasterTracksByType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UClass*                      TrackType                                                        (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMovieSceneTrack*>    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneTrack*> UMovieSceneSequenceExtensions::FindMasterTracksByExactType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "FindMasterTracksByExactType");

	Params::UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      InLabel                                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneSequenceExtensions::FindMarkedFrameByLabel(const class FString& InLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "FindMarkedFrameByLabel");

	Params::UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Params Parms{};

	Parms.InLabel = InLabel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FFrameNumber                InFrameNumber                                                    (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneSequenceExtensions::FindMarkedFrameByFrameNumber(const struct FFrameNumber& InFrameNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "FindMarkedFrameByFrameNumber");

	Params::UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Params Parms{};

	Parms.InFrameNumber = InFrameNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// struct FMovieSceneBindingProxy     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FMovieSceneBindingProxy UMovieSceneSequenceExtensions::FindBindingByName(class FString* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "FindBindingByName");

	Params::UMovieSceneSequenceExtensions_FindBindingByName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingById
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FGuid                       BindingId                                                        (BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FMovieSceneBindingProxy     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FMovieSceneBindingProxy UMovieSceneSequenceExtensions::FindBindingById()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "FindBindingById");

	Params::UMovieSceneSequenceExtensions_FindBindingById_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UMovieSceneSequence* UMovieSceneSequenceExtensions::DeleteMarkedFrames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "DeleteMarkedFrames");

	Params::UMovieSceneSequenceExtensions_DeleteMarkedFrames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              DeleteIndex                                                      (BlueprintVisible, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMovieSceneSequence* UMovieSceneSequenceExtensions::DeleteMarkedFrame(int32 DeleteIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "DeleteMarkedFrame");

	Params::UMovieSceneSequenceExtensions_DeleteMarkedFrame_Params Parms{};

	Parms.DeleteIndex = DeleteIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.AddTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UClass*                      TrackType                                                        (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneTrack*            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneTrack* UMovieSceneSequenceExtensions::AddTrack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "AddTrack");

	Params::UMovieSceneSequenceExtensions_AddTrack_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UObject*                     ObjectToSpawn                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneBindingProxy     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FMovieSceneBindingProxy UMovieSceneSequenceExtensions::AddSpawnableFromInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "AddSpawnableFromInstance");

	Params::UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UClass*                      ClassToSpawn                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneBindingProxy     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FMovieSceneBindingProxy UMovieSceneSequenceExtensions::AddSpawnableFromClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "AddSpawnableFromClass");

	Params::UMovieSceneSequenceExtensions_AddSpawnableFromClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      NewFolderName                                                    (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneFolder*           ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneFolder* UMovieSceneSequenceExtensions::AddRootFolderToSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "AddRootFolderToSequence");

	Params::UMovieSceneSequenceExtensions_AddRootFolderToSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.AddPossessable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UObject*                     ObjectToPossess                                                  (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FMovieSceneBindingProxy     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FMovieSceneBindingProxy UMovieSceneSequenceExtensions::AddPossessable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "AddPossessable");

	Params::UMovieSceneSequenceExtensions_AddPossessable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UClass*                      TrackType                                                        (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneTrack*            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneTrack* UMovieSceneSequenceExtensions::AddMasterTrack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "AddMasterTrack");

	Params::UMovieSceneSequenceExtensions_AddMasterTrack_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FMovieSceneMarkedFrame      InMarkedFrame                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneSequenceExtensions::AddMarkedFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneSequenceExtensions", "AddMarkedFrame");

	Params::UMovieSceneSequenceExtensions_AddMarkedFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneTrackExtensions
// (None)

class UClass* UMovieSceneTrackExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneTrackExtensions");

	return Clss;
}


// MovieSceneTrackExtensions SequencerScripting.Default__MovieSceneTrackExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneTrackExtensions* UMovieSceneTrackExtensions::GetDefaultObj()
{
	static class UMovieSceneTrackExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneTrackExtensions*>(UMovieSceneTrackExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneTrackExtensions.SetTrackRowDisplayName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        InName                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              RowIndex                                                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UMovieSceneTrackExtensions::SetTrackRowDisplayName(class UMovieSceneTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "SetTrackRowDisplayName");

	Params::UMovieSceneTrackExtensions_SetTrackRowDisplayName_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              SortingOrder                                                     (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

int32 UMovieSceneTrackExtensions::SetSortingOrder(class UMovieSceneTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "SetSortingOrder");

	Params::UMovieSceneTrackExtensions_SetSortingOrder_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)

class UMovieSceneSection* UMovieSceneTrackExtensions::SetSectionToKey(class UMovieSceneTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "SetSectionToKey");

	Params::UMovieSceneTrackExtensions_SetSectionToKey_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneTrackExtensions.SetDisplayName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        InName                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FText UMovieSceneTrackExtensions::SetDisplayName(class UMovieSceneTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "SetDisplayName");

	Params::UMovieSceneTrackExtensions_SetDisplayName_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneTrackExtensions.SetColorTint
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FColor                      ColorTint                                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneTrackExtensions::SetColorTint(class UMovieSceneTrack* Track, const struct FColor& ColorTint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "SetColorTint");

	Params::UMovieSceneTrackExtensions_SetColorTint_Params Parms{};

	Parms.Track = Track;
	Parms.ColorTint = ColorTint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneTrackExtensions.RemoveSection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneSection*          Section                                                          (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)

class UMovieSceneSection* UMovieSceneTrackExtensions::RemoveSection(class UMovieSceneTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "RemoveSection");

	Params::UMovieSceneTrackExtensions_RemoveSection_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneTrackExtensions.GetTrackRowDisplayName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              RowIndex                                                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UMovieSceneTrackExtensions::GetTrackRowDisplayName(class UMovieSceneTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "GetTrackRowDisplayName");

	Params::UMovieSceneTrackExtensions_GetTrackRowDisplayName_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneTrackExtensions::GetSortingOrder(class UMovieSceneTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "GetSortingOrder");

	Params::UMovieSceneTrackExtensions_GetSortingOrder_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneSection*          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSection* UMovieSceneTrackExtensions::GetSectionToKey(class UMovieSceneTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "GetSectionToKey");

	Params::UMovieSceneTrackExtensions_GetSectionToKey_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneTrackExtensions.GetSections
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UMovieSceneSection*>  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UMovieSceneSection*> UMovieSceneTrackExtensions::GetSections(class UMovieSceneTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "GetSections");

	Params::UMovieSceneTrackExtensions_GetSections_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneTrackExtensions.GetDisplayName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UMovieSceneTrackExtensions::GetDisplayName(class UMovieSceneTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "GetDisplayName");

	Params::UMovieSceneTrackExtensions_GetDisplayName_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneTrackExtensions.GetColorTint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FColor                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FColor UMovieSceneTrackExtensions::GetColorTint(class UMovieSceneTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "GetColorTint");

	Params::UMovieSceneTrackExtensions_GetColorTint_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.MovieSceneTrackExtensions.AddSection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneTrack*            Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UMovieSceneSection*          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMovieSceneSection* UMovieSceneTrackExtensions::AddSection(class UMovieSceneTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneTrackExtensions", "AddSection");

	Params::UMovieSceneTrackExtensions_AddSection_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneFloatVectorTrackExtensions
// (None)

class UClass* UMovieSceneFloatVectorTrackExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneFloatVectorTrackExtensions");

	return Clss;
}


// MovieSceneFloatVectorTrackExtensions SequencerScripting.Default__MovieSceneFloatVectorTrackExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneFloatVectorTrackExtensions* UMovieSceneFloatVectorTrackExtensions::GetDefaultObj()
{
	static class UMovieSceneFloatVectorTrackExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneFloatVectorTrackExtensions*>(UMovieSceneFloatVectorTrackExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.SetNumChannelsUsed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFloatVectorTrack* Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InNumChannelsUsed                                                (Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneFloatVectorTrackExtensions::SetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track, int32 InNumChannelsUsed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFloatVectorTrackExtensions", "SetNumChannelsUsed");

	Params::UMovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed_Params Parms{};

	Parms.Track = Track;
	Parms.InNumChannelsUsed = InNumChannelsUsed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.GetNumChannelsUsed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFloatVectorTrack* Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneFloatVectorTrackExtensions::GetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneFloatVectorTrackExtensions", "GetNumChannelsUsed");

	Params::UMovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.MovieSceneDoubleVectorTrackExtensions
// (None)

class UClass* UMovieSceneDoubleVectorTrackExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneDoubleVectorTrackExtensions");

	return Clss;
}


// MovieSceneDoubleVectorTrackExtensions SequencerScripting.Default__MovieSceneDoubleVectorTrackExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneDoubleVectorTrackExtensions* UMovieSceneDoubleVectorTrackExtensions::GetDefaultObj()
{
	static class UMovieSceneDoubleVectorTrackExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneDoubleVectorTrackExtensions*>(UMovieSceneDoubleVectorTrackExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.SetNumChannelsUsed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneDoubleVectorTrack*Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InNumChannelsUsed                                                (Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMovieSceneDoubleVectorTrackExtensions::SetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track, int32 InNumChannelsUsed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneDoubleVectorTrackExtensions", "SetNumChannelsUsed");

	Params::UMovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed_Params Parms{};

	Parms.Track = Track;
	Parms.InNumChannelsUsed = InNumChannelsUsed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.GetNumChannelsUsed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneDoubleVectorTrack*Track                                                            (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMovieSceneDoubleVectorTrackExtensions::GetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneDoubleVectorTrackExtensions", "GetNumChannelsUsed");

	Params::UMovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SequencerScripting.SequencerScriptingRangeExtensions
// (None)

class UClass* USequencerScriptingRangeExtensions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequencerScriptingRangeExtensions");

	return Clss;
}


// SequencerScriptingRangeExtensions SequencerScripting.Default__SequencerScriptingRangeExtensions
// (Public, ClassDefaultObject, ArchetypeObject)

class USequencerScriptingRangeExtensions* USequencerScriptingRangeExtensions::GetDefaultObj()
{
	static class USequencerScriptingRangeExtensions* Default = nullptr;

	if (!Default)
		Default = static_cast<USequencerScriptingRangeExtensions*>(USequencerScriptingRangeExtensions::StaticClass()->DefaultObject);

	return Default;
}


// Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// float                              Start                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)

void USequencerScriptingRangeExtensions::SetStartSeconds(const struct FSequencerScriptingRange& Range, float* Start)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "SetStartSeconds");

	Params::USequencerScriptingRangeExtensions_SetStartSeconds_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Start != nullptr)
		*Start = Parms.Start;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int32                              Start                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)

void USequencerScriptingRangeExtensions::SetStartFrame(const struct FSequencerScriptingRange& Range, int32* Start)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "SetStartFrame");

	Params::USequencerScriptingRangeExtensions_SetStartFrame_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Start != nullptr)
		*Start = Parms.Start;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// float                              End                                                              (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance)

void USequencerScriptingRangeExtensions::SetEndSeconds(const struct FSequencerScriptingRange& Range, float End)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "SetEndSeconds");

	Params::USequencerScriptingRangeExtensions_SetEndSeconds_Params Parms{};

	Parms.Range = Range;
	Parms.End = End;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int32                              End                                                              (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance)

void USequencerScriptingRangeExtensions::SetEndFrame(const struct FSequencerScriptingRange& Range, int32 End)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "SetEndFrame");

	Params::USequencerScriptingRangeExtensions_SetEndFrame_Params Parms{};

	Parms.Range = Range;
	Parms.End = End;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

void USequencerScriptingRangeExtensions::RemoveStart(const struct FSequencerScriptingRange& Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "RemoveStart");

	Params::USequencerScriptingRangeExtensions_RemoveStart_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

void USequencerScriptingRangeExtensions::RemoveEnd(const struct FSequencerScriptingRange& Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "RemoveEnd");

	Params::USequencerScriptingRangeExtensions_RemoveEnd_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.HasStart
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool USequencerScriptingRangeExtensions::HasStart(const struct FSequencerScriptingRange& Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "HasStart");

	Params::USequencerScriptingRangeExtensions_HasStart_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.HasEnd
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool USequencerScriptingRangeExtensions::HasEnd(const struct FSequencerScriptingRange& Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "HasEnd");

	Params::USequencerScriptingRangeExtensions_HasEnd_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float USequencerScriptingRangeExtensions::GetStartSeconds(const struct FSequencerScriptingRange& Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "GetStartSeconds");

	Params::USequencerScriptingRangeExtensions_GetStartSeconds_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 USequencerScriptingRangeExtensions::GetStartFrame(const struct FSequencerScriptingRange& Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "GetStartFrame");

	Params::USequencerScriptingRangeExtensions_GetStartFrame_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float USequencerScriptingRangeExtensions::GetEndSeconds(const struct FSequencerScriptingRange& Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "GetEndSeconds");

	Params::USequencerScriptingRangeExtensions_GetEndSeconds_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencerScriptingRange    Range                                                            (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 USequencerScriptingRangeExtensions::GetEndFrame(const struct FSequencerScriptingRange& Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencerScriptingRangeExtensions", "GetEndFrame");

	Params::USequencerScriptingRangeExtensions_GetEndFrame_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


