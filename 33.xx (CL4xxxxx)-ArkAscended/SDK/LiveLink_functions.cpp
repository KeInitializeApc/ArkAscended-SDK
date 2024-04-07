#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LiveLink.LiveLinkBasicFrameInterpolationProcessor
// (None)

class UClass* ULiveLinkBasicFrameInterpolationProcessor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkBasicFrameInterpolationProcessor");

	return Clss;
}


// LiveLinkBasicFrameInterpolationProcessor LiveLink.Default__LiveLinkBasicFrameInterpolationProcessor
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkBasicFrameInterpolationProcessor* ULiveLinkBasicFrameInterpolationProcessor::GetDefaultObj()
{
	static class ULiveLinkBasicFrameInterpolationProcessor* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkBasicFrameInterpolationProcessor*>(ULiveLinkBasicFrameInterpolationProcessor::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
// (None)

class UClass* ULiveLinkAnimationFrameInterpolationProcessor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkAnimationFrameInterpolationProcessor");

	return Clss;
}


// LiveLinkAnimationFrameInterpolationProcessor LiveLink.Default__LiveLinkAnimationFrameInterpolationProcessor
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkAnimationFrameInterpolationProcessor* ULiveLinkAnimationFrameInterpolationProcessor::GetDefaultObj()
{
	static class ULiveLinkAnimationFrameInterpolationProcessor* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkAnimationFrameInterpolationProcessor*>(ULiveLinkAnimationFrameInterpolationProcessor::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkAnimationVirtualSubject
// (None)

class UClass* ULiveLinkAnimationVirtualSubject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkAnimationVirtualSubject");

	return Clss;
}


// LiveLinkAnimationVirtualSubject LiveLink.Default__LiveLinkAnimationVirtualSubject
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkAnimationVirtualSubject* ULiveLinkAnimationVirtualSubject::GetDefaultObj()
{
	static class ULiveLinkAnimationVirtualSubject* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkAnimationVirtualSubject*>(ULiveLinkAnimationVirtualSubject::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkBlueprintLibrary
// (None)

class UClass* ULiveLinkBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkBlueprintLibrary");

	return Clss;
}


// LiveLinkBlueprintLibrary LiveLink.Default__LiveLinkBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkBlueprintLibrary* ULiveLinkBlueprintLibrary::GetDefaultObj()
{
	static class ULiveLinkBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkBlueprintLibrary*>(ULiveLinkBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// TArray<class FName>                TransformNames                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)

void ULiveLinkBlueprintLibrary::TransformNames(const struct FSubjectFrameHandle& SubjectFrameHandle, TArray<class FName>* TransformNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "TransformNames");

	Params::ULiveLinkBlueprintLibrary_TransformNames_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TransformNames != nullptr)
		*TransformNames = std::move(Parms.TransformNames);

}


// Function LiveLink.LiveLinkBlueprintLibrary.TransformName
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// class FName                        Name                                                             (ConstParm, Net, OutParm)

void ULiveLinkBlueprintLibrary::TransformName(const struct FLiveLinkTransform& LiveLinkTransform, class FName* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "TransformName");

	Params::ULiveLinkBlueprintLibrary_TransformName_Params Parms{};

	Parms.LiveLinkTransform = LiveLinkTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectKey         SubjectKey                                                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bEnabled                                                         (Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)

void ULiveLinkBlueprintLibrary::SetLiveLinkSubjectEnabled(struct FLiveLinkSubjectKey* SubjectKey, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "SetLiveLinkSubjectEnabled");

	Params::ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectKey != nullptr)
		*SubjectKey = std::move(Parms.SubjectKey);

}


// Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::RemoveSource(struct FLiveLinkSourceHandle* SourceHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "RemoveSource");

	Params::ULiveLinkBlueprintLibrary_RemoveSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SourceHandle != nullptr)
		*SourceHandle = std::move(Parms.SourceHandle);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)

void ULiveLinkBlueprintLibrary::ParentBoneSpaceTransform(const struct FLiveLinkTransform& LiveLinkTransform, struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "ParentBoneSpaceTransform");

	Params::ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Params Parms{};

	Parms.LiveLinkTransform = LiveLinkTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 ULiveLinkBlueprintLibrary::NumberOfTransforms(const struct FSubjectFrameHandle& SubjectFrameHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "NumberOfTransforms");

	Params::ULiveLinkBlueprintLibrary_NumberOfTransforms_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectKey         SubjectKey                                                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bForThisFrame                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::IsSpecificLiveLinkSubjectEnabled(struct FLiveLinkSubjectKey* SubjectKey, bool* bForThisFrame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "IsSpecificLiveLinkSubjectEnabled");

	Params::ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectKey != nullptr)
		*SubjectKey = std::move(Parms.SubjectKey);

	if (bForThisFrame != nullptr)
		*bForThisFrame = Parms.bForThisFrame;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::IsSourceStillValid(struct FLiveLinkSourceHandle* SourceHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "IsSourceStillValid");

	Params::ULiveLinkBlueprintLibrary_IsSourceStillValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SourceHandle != nullptr)
		*SourceHandle = std::move(Parms.SourceHandle);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::IsLiveLinkSubjectEnabled(struct FLiveLinkSubjectName* SubjectName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "IsLiveLinkSubjectEnabled");

	Params::ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectName != nullptr)
		*SubjectName = std::move(Parms.SubjectName);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.HasParent
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::HasParent(const struct FLiveLinkTransform& LiveLinkTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "HasParent");

	Params::ULiveLinkBlueprintLibrary_HasParent_Params Parms{};

	Parms.LiveLinkTransform = LiveLinkTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// class FName                        TransformName                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// struct FLiveLinkTransform          LiveLinkTransform                                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

void ULiveLinkBlueprintLibrary::GetTransformByName(const struct FSubjectFrameHandle& SubjectFrameHandle, class FName* TransformName, const struct FLiveLinkTransform& LiveLinkTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetTransformByName");

	Params::ULiveLinkBlueprintLibrary_GetTransformByName_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;
	Parms.LiveLinkTransform = LiveLinkTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TransformName != nullptr)
		*TransformName = Parms.TransformName;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// int32                              TransformIndex                                                   (ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FLiveLinkTransform          LiveLinkTransform                                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

void ULiveLinkBlueprintLibrary::GetTransformByIndex(const struct FSubjectFrameHandle& SubjectFrameHandle, int32 TransformIndex, const struct FLiveLinkTransform& LiveLinkTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetTransformByIndex");

	Params::ULiveLinkBlueprintLibrary_GetTransformByIndex_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;
	Parms.TransformIndex = TransformIndex;
	Parms.LiveLinkTransform = LiveLinkTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectKey         SubjectKey                                                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UClass*                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UClass* ULiveLinkBlueprintLibrary::GetSpecificLiveLinkSubjectRole(struct FLiveLinkSubjectKey* SubjectKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSpecificLiveLinkSubjectRole");

	Params::ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectKey != nullptr)
		*SubjectKey = std::move(Parms.SubjectKey);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceTypeFromGuid
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       SourceGuid                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FText ULiveLinkBlueprintLibrary::GetSourceTypeFromGuid(struct FGuid* SourceGuid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSourceTypeFromGuid");

	Params::ULiveLinkBlueprintLibrary_GetSourceTypeFromGuid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SourceGuid != nullptr)
		*SourceGuid = std::move(Parms.SourceGuid);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FText ULiveLinkBlueprintLibrary::GetSourceType(struct FLiveLinkSourceHandle* SourceHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSourceType");

	Params::ULiveLinkBlueprintLibrary_GetSourceType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SourceHandle != nullptr)
		*SourceHandle = std::move(Parms.SourceHandle);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FText ULiveLinkBlueprintLibrary::GetSourceStatus(struct FLiveLinkSourceHandle* SourceHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSourceStatus");

	Params::ULiveLinkBlueprintLibrary_GetSourceStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SourceHandle != nullptr)
		*SourceHandle = std::move(Parms.SourceHandle);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FText ULiveLinkBlueprintLibrary::GetSourceMachineName(struct FLiveLinkSourceHandle* SourceHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSourceMachineName");

	Params::ULiveLinkBlueprintLibrary_GetSourceMachineName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SourceHandle != nullptr)
		*SourceHandle = std::move(Parms.SourceHandle);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// struct FLiveLinkTransform          LiveLinkTransform                                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

void ULiveLinkBlueprintLibrary::GetRootTransform(const struct FSubjectFrameHandle& SubjectFrameHandle, const struct FLiveLinkTransform& LiveLinkTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetRootTransform");

	Params::ULiveLinkBlueprintLibrary_GetRootTransform_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;
	Parms.LiveLinkTransform = LiveLinkTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkBasicBlueprintData BasicData                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        PropertyName                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, SubobjectReference)
// float                              Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::GetPropertyValue(struct FLiveLinkBasicBlueprintData* BasicData, class FName PropertyName, float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetPropertyValue");

	Params::ULiveLinkBlueprintLibrary_GetPropertyValue_Params Parms{};

	Parms.PropertyName = PropertyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BasicData != nullptr)
		*BasicData = std::move(Parms.BasicData);

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetParent
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// struct FLiveLinkTransform          Parent                                                           (ConstParm, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance)

void ULiveLinkBlueprintLibrary::GetParent(const struct FLiveLinkTransform& LiveLinkTransform, struct FLiveLinkTransform* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetParent");

	Params::ULiveLinkBlueprintLibrary_GetParent_Params Parms{};

	Parms.LiveLinkTransform = LiveLinkTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Parent != nullptr)
		*Parent = std::move(Parms.Parent);

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// struct FSubjectMetadata            MetaData                                                         (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, GlobalConfig)

void ULiveLinkBlueprintLibrary::GetMetadata(const struct FSubjectFrameHandle& SubjectFrameHandle, const struct FSubjectMetadata& MetaData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetMetadata");

	Params::ULiveLinkBlueprintLibrary_GetMetadata_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;
	Parms.MetaData = MetaData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bIncludeDisabledSubject                                          (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIncludeVirtualSubject                                           (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FLiveLinkSubjectKey> ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FLiveLinkSubjectKey> ULiveLinkBlueprintLibrary::GetLiveLinkSubjects(bool* bIncludeDisabledSubject, bool* bIncludeVirtualSubject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetLiveLinkSubjects");

	Params::ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIncludeDisabledSubject != nullptr)
		*bIncludeDisabledSubject = Parms.bIncludeDisabledSubject;

	if (bIncludeVirtualSubject != nullptr)
		*bIncludeVirtualSubject = Parms.bIncludeVirtualSubject;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// class UClass*                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UClass* ULiveLinkBlueprintLibrary::GetLiveLinkSubjectRole(struct FLiveLinkSubjectName* SubjectName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetLiveLinkSubjectRole");

	Params::ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectName != nullptr)
		*SubjectName = std::move(Parms.SubjectName);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bIncludeVirtualSubject                                           (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FLiveLinkSubjectName>ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FLiveLinkSubjectName> ULiveLinkBlueprintLibrary::GetLiveLinkEnabledSubjectNames(bool* bIncludeVirtualSubject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetLiveLinkEnabledSubjectNames");

	Params::ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIncludeVirtualSubject != nullptr)
		*bIncludeVirtualSubject = Parms.bIncludeVirtualSubject;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// TMap<class FName, float>           Curves                                                           (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)

TMap<class FName, float> ULiveLinkBlueprintLibrary::GetCurves(const struct FSubjectFrameHandle& SubjectFrameHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetCurves");

	Params::ULiveLinkBlueprintLibrary_GetCurves_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// TArray<struct FLiveLinkTransform>  Children                                                         (Edit, ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

TArray<struct FLiveLinkTransform> ULiveLinkBlueprintLibrary::GetChildren(const struct FLiveLinkTransform& LiveLinkTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetChildren");

	Params::ULiveLinkBlueprintLibrary_GetChildren_Params Parms{};

	Parms.LiveLinkTransform = LiveLinkTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// struct FLiveLinkBasicBlueprintData BasicBlueprintData                                               (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)

void ULiveLinkBlueprintLibrary::GetBasicData(const struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkBasicBlueprintData* BasicBlueprintData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetBasicData");

	Params::ULiveLinkBlueprintLibrary_GetBasicData_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BasicBlueprintData != nullptr)
		*BasicBlueprintData = std::move(Parms.BasicBlueprintData);

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// struct FLiveLinkSkeletonStaticData AnimationStaticData                                              (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::GetAnimationStaticData(const struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkSkeletonStaticData* AnimationStaticData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetAnimationStaticData");

	Params::ULiveLinkBlueprintLibrary_GetAnimationStaticData_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AnimationStaticData != nullptr)
		*AnimationStaticData = std::move(Parms.AnimationStaticData);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// struct FLiveLinkAnimationFrameData AnimationFrameData                                               (Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::GetAnimationFrameData(const struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkAnimationFrameData* AnimationFrameData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetAnimationFrameData");

	Params::ULiveLinkBlueprintLibrary_GetAnimationFrameData_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AnimationFrameData != nullptr)
		*AnimationFrameData = std::move(Parms.AnimationFrameData);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// class UClass*                      Role                                                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
// struct FLiveLinkBaseBlueprintData  OutBlueprintData                                                 (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameWithSpecificRole(struct FLiveLinkSubjectName* SubjectName, class UClass* Role, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrameWithSpecificRole");

	Params::ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Params Parms{};

	Parms.Role = Role;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectName != nullptr)
		*SubjectName = std::move(Parms.SubjectName);

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = std::move(Parms.OutBlueprintData);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// class UClass*                      Role                                                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
// float                              WorldTimeOffset                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FLiveLinkBaseBlueprintData  OutBlueprintData                                                 (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameAtWorldTimeOffset(struct FLiveLinkSubjectName* SubjectName, class UClass* Role, float* WorldTimeOffset, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrameAtWorldTimeOffset");

	Params::ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Params Parms{};

	Parms.Role = Role;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectName != nullptr)
		*SubjectName = std::move(Parms.SubjectName);

	if (WorldTimeOffset != nullptr)
		*WorldTimeOffset = Parms.WorldTimeOffset;

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = std::move(Parms.OutBlueprintData);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// class UClass*                      Role                                                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
// struct FTimecode                   SceneTime                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
// struct FLiveLinkBaseBlueprintData  OutBlueprintData                                                 (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameAtSceneTime(struct FLiveLinkSubjectName* SubjectName, class UClass* Role, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrameAtSceneTime");

	Params::ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Params Parms{};

	Parms.Role = Role;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectName != nullptr)
		*SubjectName = std::move(Parms.SubjectName);

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = std::move(Parms.OutBlueprintData);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectRepresentationSubjectRepresentation                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FLiveLinkBaseBlueprintData  OutBlueprintData                                                 (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrame(struct FLiveLinkSubjectRepresentation* SubjectRepresentation, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrame");

	Params::ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectRepresentation != nullptr)
		*SubjectRepresentation = std::move(Parms.SubjectRepresentation);

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = std::move(Parms.OutBlueprintData);

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// struct FTransform                  Transform                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)

void ULiveLinkBlueprintLibrary::ComponentSpaceTransform(const struct FLiveLinkTransform& LiveLinkTransform, struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "ComponentSpaceTransform");

	Params::ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Params Parms{};

	Parms.LiveLinkTransform = LiveLinkTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 ULiveLinkBlueprintLibrary::ChildCount(const struct FLiveLinkTransform& LiveLinkTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "ChildCount");

	Params::ULiveLinkBlueprintLibrary_ChildCount_Params Parms{};

	Parms.LiveLinkTransform = LiveLinkTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LiveLink.LiveLinkComponent
// (None)

class UClass* ULiveLinkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkComponent");

	return Clss;
}


// LiveLinkComponent LiveLink.Default__LiveLinkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkComponent* ULiveLinkComponent::GetDefaultObj()
{
	static class ULiveLinkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkComponent*>(ULiveLinkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SubjectName                                                      (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// float                              WorldTime                                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
// bool                               bSuccess                                                         (Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

bool ULiveLinkComponent::GetSubjectDataAtWorldTime(class FName* SubjectName, const struct FSubjectFrameHandle& SubjectFrameHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkComponent", "GetSubjectDataAtWorldTime");

	Params::ULiveLinkComponent_GetSubjectDataAtWorldTime_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectName != nullptr)
		*SubjectName = Parms.SubjectName;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SubjectName                                                      (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// struct FTimecode                   SceneTime                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
// bool                               bSuccess                                                         (Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

bool ULiveLinkComponent::GetSubjectDataAtSceneTime(class FName* SubjectName, const struct FSubjectFrameHandle& SubjectFrameHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkComponent", "GetSubjectDataAtSceneTime");

	Params::ULiveLinkComponent_GetSubjectDataAtSceneTime_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectName != nullptr)
		*SubjectName = Parms.SubjectName;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkComponent.GetSubjectData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SubjectName                                                      (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// bool                               bSuccess                                                         (Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)

bool ULiveLinkComponent::GetSubjectData(class FName* SubjectName, const struct FSubjectFrameHandle& SubjectFrameHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkComponent", "GetSubjectData");

	Params::ULiveLinkComponent_GetSubjectData_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectName != nullptr)
		*SubjectName = Parms.SubjectName;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FName>                SubjectNames                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)

void ULiveLinkComponent::GetAvailableSubjectNames(TArray<class FName>* SubjectNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkComponent", "GetAvailableSubjectNames");

	Params::ULiveLinkComponent_GetAvailableSubjectNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectNames != nullptr)
		*SubjectNames = std::move(Parms.SubjectNames);

}


// Class LiveLink.LiveLinkDrivenComponent
// (None)

class UClass* ULiveLinkDrivenComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkDrivenComponent");

	return Clss;
}


// LiveLinkDrivenComponent LiveLink.Default__LiveLinkDrivenComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkDrivenComponent* ULiveLinkDrivenComponent::GetDefaultObj()
{
	static class ULiveLinkDrivenComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkDrivenComponent*>(ULiveLinkDrivenComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkMessageBusFinder
// (None)

class UClass* ULiveLinkMessageBusFinder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkMessageBusFinder");

	return Clss;
}


// LiveLinkMessageBusFinder LiveLink.Default__LiveLinkMessageBusFinder
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkMessageBusFinder* ULiveLinkMessageBusFinder::GetDefaultObj()
{
	static class ULiveLinkMessageBusFinder* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkMessageBusFinder*>(ULiveLinkMessageBusFinder::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FLatentActionInfo           LatentInfo                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              Duration                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
// TArray<struct FProviderPollResult> AvailableProviders                                               (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<struct FProviderPollResult> ULiveLinkMessageBusFinder::GetAvailableProviders(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkMessageBusFinder", "GetAvailableProviders");

	Params::ULiveLinkMessageBusFinder_GetAvailableProviders_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULiveLinkMessageBusFinder*   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class ULiveLinkMessageBusFinder* ULiveLinkMessageBusFinder::ConstructMessageBusFinder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkMessageBusFinder", "ConstructMessageBusFinder");

	Params::ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FProviderPollResult         Provider                                                         (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FLiveLinkSourceHandle       SourceHandle                                                     (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)

void ULiveLinkMessageBusFinder::ConnectToProvider(struct FProviderPollResult* Provider, struct FLiveLinkSourceHandle* SourceHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkMessageBusFinder", "ConnectToProvider");

	Params::ULiveLinkMessageBusFinder_ConnectToProvider_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Provider != nullptr)
		*Provider = std::move(Parms.Provider);

	if (SourceHandle != nullptr)
		*SourceHandle = std::move(Parms.SourceHandle);

}


// Class LiveLink.LiveLinkMessageBusSourceFactory
// (None)

class UClass* ULiveLinkMessageBusSourceFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkMessageBusSourceFactory");

	return Clss;
}


// LiveLinkMessageBusSourceFactory LiveLink.Default__LiveLinkMessageBusSourceFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkMessageBusSourceFactory* ULiveLinkMessageBusSourceFactory::GetDefaultObj()
{
	static class ULiveLinkMessageBusSourceFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkMessageBusSourceFactory*>(ULiveLinkMessageBusSourceFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkMessageBusSourceSettings
// (None)

class UClass* ULiveLinkMessageBusSourceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkMessageBusSourceSettings");

	return Clss;
}


// LiveLinkMessageBusSourceSettings LiveLink.Default__LiveLinkMessageBusSourceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkMessageBusSourceSettings* ULiveLinkMessageBusSourceSettings::GetDefaultObj()
{
	static class ULiveLinkMessageBusSourceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkMessageBusSourceSettings*>(ULiveLinkMessageBusSourceSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkPreset
// (None)

class UClass* ULiveLinkPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkPreset");

	return Clss;
}


// LiveLinkPreset LiveLink.Default__LiveLinkPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkPreset* ULiveLinkPreset::GetDefaultObj()
{
	static class ULiveLinkPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkPreset*>(ULiveLinkPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLink.LiveLinkPreset.BuildFromClient
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULiveLinkPreset::BuildFromClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkPreset", "BuildFromClient");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkPreset.ApplyToClientLatent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FLatentActionInfo           LatentInfo                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

struct FLatentActionInfo ULiveLinkPreset::ApplyToClientLatent(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkPreset", "ApplyToClientLatent");

	Params::ULiveLinkPreset_ApplyToClientLatent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkPreset.ApplyToClient
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULiveLinkPreset::ApplyToClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkPreset", "ApplyToClient");

	Params::ULiveLinkPreset_ApplyToClient_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkPreset.AddToClient
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                               bRecreatePresets                                                 (Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULiveLinkPreset::AddToClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkPreset", "AddToClient");

	Params::ULiveLinkPreset_AddToClient_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LiveLink.LiveLinkUserSettings
// (None)

class UClass* ULiveLinkUserSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkUserSettings");

	return Clss;
}


// LiveLinkUserSettings LiveLink.Default__LiveLinkUserSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkUserSettings* ULiveLinkUserSettings::GetDefaultObj()
{
	static class ULiveLinkUserSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkUserSettings*>(ULiveLinkUserSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkSettings
// (None)

class UClass* ULiveLinkSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkSettings");

	return Clss;
}


// LiveLinkSettings LiveLink.Default__LiveLinkSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkSettings* ULiveLinkSettings::GetDefaultObj()
{
	static class ULiveLinkSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkSettings*>(ULiveLinkSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkTimecodeProvider
// (None)

class UClass* ULiveLinkTimecodeProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkTimecodeProvider");

	return Clss;
}


// LiveLinkTimecodeProvider LiveLink.Default__LiveLinkTimecodeProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkTimecodeProvider* ULiveLinkTimecodeProvider::GetDefaultObj()
{
	static class ULiveLinkTimecodeProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkTimecodeProvider*>(ULiveLinkTimecodeProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkTimeSynchronizationSource
// (None)

class UClass* ULiveLinkTimeSynchronizationSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkTimeSynchronizationSource");

	return Clss;
}


// LiveLinkTimeSynchronizationSource LiveLink.Default__LiveLinkTimeSynchronizationSource
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkTimeSynchronizationSource* ULiveLinkTimeSynchronizationSource::GetDefaultObj()
{
	static class ULiveLinkTimeSynchronizationSource* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkTimeSynchronizationSource*>(ULiveLinkTimeSynchronizationSource::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkVirtualSubjectSourceSettings
// (None)

class UClass* ULiveLinkVirtualSubjectSourceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkVirtualSubjectSourceSettings");

	return Clss;
}


// LiveLinkVirtualSubjectSourceSettings LiveLink.Default__LiveLinkVirtualSubjectSourceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkVirtualSubjectSourceSettings* ULiveLinkVirtualSubjectSourceSettings::GetDefaultObj()
{
	static class ULiveLinkVirtualSubjectSourceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkVirtualSubjectSourceSettings*>(ULiveLinkVirtualSubjectSourceSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor
// (None)

class UClass* ULiveLinkTransformAxisSwitchPreProcessor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkTransformAxisSwitchPreProcessor");

	return Clss;
}


// LiveLinkTransformAxisSwitchPreProcessor LiveLink.Default__LiveLinkTransformAxisSwitchPreProcessor
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkTransformAxisSwitchPreProcessor* ULiveLinkTransformAxisSwitchPreProcessor::GetDefaultObj()
{
	static class ULiveLinkTransformAxisSwitchPreProcessor* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkTransformAxisSwitchPreProcessor*>(ULiveLinkTransformAxisSwitchPreProcessor::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
// (None)

class UClass* ULiveLinkAnimationAxisSwitchPreProcessor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkAnimationAxisSwitchPreProcessor");

	return Clss;
}


// LiveLinkAnimationAxisSwitchPreProcessor LiveLink.Default__LiveLinkAnimationAxisSwitchPreProcessor
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkAnimationAxisSwitchPreProcessor* ULiveLinkAnimationAxisSwitchPreProcessor::GetDefaultObj()
{
	static class ULiveLinkAnimationAxisSwitchPreProcessor* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkAnimationAxisSwitchPreProcessor*>(ULiveLinkAnimationAxisSwitchPreProcessor::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkAnimationRoleToTransform
// (None)

class UClass* ULiveLinkAnimationRoleToTransform::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkAnimationRoleToTransform");

	return Clss;
}


// LiveLinkAnimationRoleToTransform LiveLink.Default__LiveLinkAnimationRoleToTransform
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkAnimationRoleToTransform* ULiveLinkAnimationRoleToTransform::GetDefaultObj()
{
	static class ULiveLinkAnimationRoleToTransform* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkAnimationRoleToTransform*>(ULiveLinkAnimationRoleToTransform::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkBlueprintVirtualSubject
// (None)

class UClass* ULiveLinkBlueprintVirtualSubject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkBlueprintVirtualSubject");

	return Clss;
}


// LiveLinkBlueprintVirtualSubject LiveLink.Default__LiveLinkBlueprintVirtualSubject
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkBlueprintVirtualSubject* ULiveLinkBlueprintVirtualSubject::GetDefaultObj()
{
	static class ULiveLinkBlueprintVirtualSubject* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkBlueprintVirtualSubject*>(ULiveLinkBlueprintVirtualSubject::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkBaseStaticData     InStruct                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectStaticData_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintVirtualSubject", "UpdateVirtualSubjectStaticData_Internal");

	Params::ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkBaseFrameData      InStruct                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInShouldStampCurrentTime                                        (Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectFrameData_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintVirtualSubject", "UpdateVirtualSubjectFrameData_Internal");

	Params::ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintVirtualSubject.OnUpdate
// (Event, Public, BlueprintEvent)
// Parameters:

void ULiveLinkBlueprintVirtualSubject::OnUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintVirtualSubject", "OnUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LiveLink.LiveLinkBlueprintVirtualSubject.OnInitialize
// (Event, Public, BlueprintEvent)
// Parameters:

void ULiveLinkBlueprintVirtualSubject::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintVirtualSubject", "OnInitialize");



	UObject::ProcessEvent(Func, nullptr);

}

}


