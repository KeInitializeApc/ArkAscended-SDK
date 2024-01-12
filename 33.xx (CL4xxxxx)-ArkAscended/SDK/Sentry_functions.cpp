#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Sentry.SentryAttachment
// (None)

class UClass* USentryAttachment::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryAttachment");

	return Clss;
}


// SentryAttachment Sentry.Default__SentryAttachment
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryAttachment* USentryAttachment::GetDefaultObj()
{
	static class USentryAttachment* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryAttachment*>(USentryAttachment::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryAttachment.InitializeWithPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
// class FString                      Filename                                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
// class FString                      ContentType                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

class FString USentryAttachment::InitializeWithPath(const class FString& Path, class FString* ContentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "InitializeWithPath");

	Params::USentryAttachment_InitializeWithPath_Params Parms{};

	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ContentType != nullptr)
		*ContentType = std::move(Parms.ContentType);

	return Parms.ReturnValue;

}


// Function Sentry.SentryAttachment.InitializeWithData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Data                                                             (ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      Filename                                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
// class FString                      ContentType                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

class FString USentryAttachment::InitializeWithData(const TArray<uint8>& Data, class FString* ContentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "InitializeWithData");

	Params::USentryAttachment_InitializeWithData_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ContentType != nullptr)
		*ContentType = std::move(Parms.ContentType);

	return Parms.ReturnValue;

}


// Function Sentry.SentryAttachment.GetPath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryAttachment::GetPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "GetPath");

	Params::USentryAttachment_GetPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryAttachment.GetFilename
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryAttachment::GetFilename()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "GetFilename");

	Params::USentryAttachment_GetFilename_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryAttachment.GetData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<uint8>                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<uint8> USentryAttachment::GetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "GetData");

	Params::USentryAttachment_GetData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryAttachment.GetContentType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryAttachment::GetContentType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryAttachment", "GetContentType");

	Params::USentryAttachment_GetContentType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Sentry.SentryBreadcrumb
// (None)

class UClass* USentryBreadcrumb::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryBreadcrumb");

	return Clss;
}


// SentryBreadcrumb Sentry.Default__SentryBreadcrumb
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryBreadcrumb* USentryBreadcrumb::GetDefaultObj()
{
	static class USentryBreadcrumb* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryBreadcrumb*>(USentryBreadcrumb::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryBreadcrumb.SetType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Type                                                             (Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)

class FString USentryBreadcrumb::SetType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "SetType");

	Params::USentryBreadcrumb_SetType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryBreadcrumb.SetMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryBreadcrumb::SetMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "SetMessage");

	Params::USentryBreadcrumb_SetMessage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryBreadcrumb.SetLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESentryLevel            Level                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)

enum class ESentryLevel USentryBreadcrumb::SetLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "SetLevel");

	Params::USentryBreadcrumb_SetLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryBreadcrumb.SetData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> Data                                                             (ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void USentryBreadcrumb::SetData(TMap<class FString, class FString> Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "SetData");

	Params::USentryBreadcrumb_SetData_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryBreadcrumb.SetCategory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Category                                                         (ConstParm, BlueprintReadOnly, OutParm, Transient)

void USentryBreadcrumb::SetCategory(class FString* Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "SetCategory");

	Params::USentryBreadcrumb_SetCategory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Category != nullptr)
		*Category = std::move(Parms.Category);

}


// Function Sentry.SentryBreadcrumb.GetType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryBreadcrumb::GetType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "GetType");

	Params::USentryBreadcrumb_GetType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryBreadcrumb.GetMessage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryBreadcrumb::GetMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "GetMessage");

	Params::USentryBreadcrumb_GetMessage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryBreadcrumb.GetLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESentryLevel            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ESentryLevel USentryBreadcrumb::GetLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "GetLevel");

	Params::USentryBreadcrumb_GetLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryBreadcrumb.GetData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TMap<class FString, class FString> USentryBreadcrumb::GetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "GetData");

	Params::USentryBreadcrumb_GetData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryBreadcrumb.GetCategory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryBreadcrumb::GetCategory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryBreadcrumb", "GetCategory");

	Params::USentryBreadcrumb_GetCategory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Sentry.SentryEvent
// (None)

class UClass* USentryEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryEvent");

	return Clss;
}


// SentryEvent Sentry.Default__SentryEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryEvent* USentryEvent::GetDefaultObj()
{
	static class USentryEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryEvent*>(USentryEvent::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryEvent.SetMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryEvent::SetMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "SetMessage");

	Params::USentryEvent_SetMessage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryEvent.SetLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESentryLevel            Level                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)

enum class ESentryLevel USentryEvent::SetLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "SetLevel");

	Params::USentryEvent_SetLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryEvent.GetMessage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryEvent::GetMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "GetMessage");

	Params::USentryEvent_GetMessage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryEvent.GetLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESentryLevel            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ESentryLevel USentryEvent::GetLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryEvent", "GetLevel");

	Params::USentryEvent_GetLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Sentry.SentryId
// (None)

class UClass* USentryId::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryId");

	return Clss;
}


// SentryId Sentry.Default__SentryId
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryId* USentryId::GetDefaultObj()
{
	static class USentryId* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryId*>(USentryId::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryId.ToString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryId::ToString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryId", "ToString");

	Params::USentryId_ToString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Sentry.SentryLibrary
// (None)

class UClass* USentryLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryLibrary");

	return Clss;
}


// SentryLibrary Sentry.Default__SentryLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryLibrary* USentryLibrary::GetDefaultObj()
{
	static class USentryLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryLibrary*>(USentryLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryLibrary.StringToBytesArray
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InString                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<uint8>                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<uint8> USentryLibrary::StringToBytesArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "StringToBytesArray");

	Params::USentryLibrary_StringToBytesArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.SaveStringToFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InString                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      Filename                                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryLibrary::SaveStringToFile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "SaveStringToFile");

	Params::USentryLibrary_SaveStringToFile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.CreateSentryUserFeedback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USentryId*                   EventId                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class FString                      Email                                                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class FString                      Comments                                                         (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class USentryUserFeedback*         ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class USentryUserFeedback* USentryLibrary::CreateSentryUserFeedback(class USentryId** EventId, class FString* Name, const class FString& Email, class FString* Comments)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryUserFeedback");

	Params::USentryLibrary_CreateSentryUserFeedback_Params Parms{};

	Parms.Email = Email;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EventId != nullptr)
		*EventId = Parms.EventId;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Comments != nullptr)
		*Comments = std::move(Parms.Comments);

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.CreateSentryUser
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Email                                                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class FString                      ID                                                               (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
// class FString                      Username                                                         (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class FString                      IpAddress                                                        (BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TMap<class FString, class FString> Data                                                             (ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USentryUser*                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class USentryUser* USentryLibrary::CreateSentryUser(const class FString& Email, class FString* ID, const class FString& Username, class FString* IpAddress, TMap<class FString, class FString> Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryUser");

	Params::USentryLibrary_CreateSentryUser_Params Parms{};

	Parms.Email = Email;
	Parms.Username = Username;
	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ID != nullptr)
		*ID = std::move(Parms.ID);

	if (IpAddress != nullptr)
		*IpAddress = std::move(Parms.IpAddress);

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.CreateSentryEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESentryLevel            Level                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// class USentryEvent*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class USentryEvent* USentryLibrary::CreateSentryEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryEvent");

	Params::USentryLibrary_CreateSentryEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.CreateSentryBreadcrumb
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      Type                                                             (Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
// class FString                      Category                                                         (ConstParm, BlueprintReadOnly, OutParm, Transient)
// TMap<class FString, class FString> Data                                                             (ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESentryLevel            Level                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// class USentryBreadcrumb*           ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class USentryBreadcrumb* USentryLibrary::CreateSentryBreadcrumb(class FString* Category, TMap<class FString, class FString> Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryBreadcrumb");

	Params::USentryLibrary_CreateSentryBreadcrumb_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Category != nullptr)
		*Category = std::move(Parms.Category);

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.CreateSentryAttachmentWithPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
// class FString                      Filename                                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
// class FString                      ContentType                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class USentryAttachment*           ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class USentryAttachment* USentryLibrary::CreateSentryAttachmentWithPath(const class FString& Path, class FString* ContentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryAttachmentWithPath");

	Params::USentryLibrary_CreateSentryAttachmentWithPath_Params Parms{};

	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ContentType != nullptr)
		*ContentType = std::move(Parms.ContentType);

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.CreateSentryAttachmentWithData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Data                                                             (ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      Filename                                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
// class FString                      ContentType                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class USentryAttachment*           ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class USentryAttachment* USentryLibrary::CreateSentryAttachmentWithData(const TArray<uint8>& Data, class FString* ContentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "CreateSentryAttachmentWithData");

	Params::USentryLibrary_CreateSentryAttachmentWithData_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ContentType != nullptr)
		*ContentType = std::move(Parms.ContentType);

	return Parms.ReturnValue;

}


// Function Sentry.SentryLibrary.ByteArrayToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Array                                                            (ExportObject, Parm, OutParm, ZeroConstructor)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryLibrary::ByteArrayToString(TArray<uint8>* Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryLibrary", "ByteArrayToString");

	Params::USentryLibrary_ByteArrayToString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

	return Parms.ReturnValue;

}


// Class Sentry.SentryScope
// (None)

class UClass* USentryScope::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryScope");

	return Clss;
}


// SentryScope Sentry.Default__SentryScope
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryScope* USentryScope::GetDefaultObj()
{
	static class USentryScope* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryScope*>(USentryScope::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryScope.SetTagValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class FString                      Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void USentryScope::SetTagValue(const class FString& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetTagValue");

	Params::USentryScope_SetTagValue_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.SetTags
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> Tags                                                             (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Config)

void USentryScope::SetTags(TMap<class FString, class FString>* Tags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetTags");

	Params::USentryScope_SetTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Tags != nullptr)
		*Tags = Parms.Tags;

}


// Function Sentry.SentryScope.SetLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESentryLevel            Level                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)

enum class ESentryLevel USentryScope::SetLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetLevel");

	Params::USentryScope_SetLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.SetFingerprint
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              Fingerprint                                                      (Edit, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

TArray<class FString> USentryScope::SetFingerprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetFingerprint");

	Params::USentryScope_SetFingerprint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.SetExtraValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class FString                      Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void USentryScope::SetExtraValue(const class FString& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetExtraValue");

	Params::USentryScope_SetExtraValue_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.SetExtras
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> Extras                                                           (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void USentryScope::SetExtras(TMap<class FString, class FString>* Extras)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetExtras");

	Params::USentryScope_SetExtras_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Extras != nullptr)
		*Extras = Parms.Extras;

}


// Function Sentry.SentryScope.SetEnvironment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Environment                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void USentryScope::SetEnvironment(class FString* Environment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetEnvironment");

	Params::USentryScope_SetEnvironment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Environment != nullptr)
		*Environment = std::move(Parms.Environment);

}


// Function Sentry.SentryScope.SetDist
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Dist                                                             (EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void USentryScope::SetDist(class FString* Dist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetDist");

	Params::USentryScope_SetDist_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Dist != nullptr)
		*Dist = std::move(Parms.Dist);

}


// Function Sentry.SentryScope.SetContext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// TMap<class FString, class FString> Values                                                           (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)

TMap<class FString, class FString> USentryScope::SetContext(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "SetContext");

	Params::USentryScope_SetContext_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.RemoveTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void USentryScope::RemoveTag(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "RemoveTag");

	Params::USentryScope_RemoveTag_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.RemoveExtra
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void USentryScope::RemoveExtra(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "RemoveExtra");

	Params::USentryScope_RemoveExtra_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.RemoveContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void USentryScope::RemoveContext(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "RemoveContext");

	Params::USentryScope_RemoveContext_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.GetTagValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryScope::GetTagValue(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetTagValue");

	Params::USentryScope_GetTagValue_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TMap<class FString, class FString> USentryScope::GetTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetTags");

	Params::USentryScope_GetTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESentryLevel            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ESentryLevel USentryScope::GetLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetLevel");

	Params::USentryScope_GetLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetFingerprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class FString> USentryScope::GetFingerprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetFingerprint");

	Params::USentryScope_GetFingerprint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetExtraValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryScope::GetExtraValue(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetExtraValue");

	Params::USentryScope_GetExtraValue_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetExtras
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TMap<class FString, class FString> USentryScope::GetExtras()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetExtras");

	Params::USentryScope_GetExtras_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetEnvironment
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryScope::GetEnvironment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetEnvironment");

	Params::USentryScope_GetEnvironment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.GetDist
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryScope::GetDist()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "GetDist");

	Params::USentryScope_GetDist_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryScope.ClearBreadcrumbs
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentryScope::ClearBreadcrumbs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "ClearBreadcrumbs");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.ClearAttachments
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentryScope::ClearAttachments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "ClearAttachments");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.Clear
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentryScope::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "Clear");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryScope.AddBreadcrumb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryBreadcrumb*           Breadcrumb                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void USentryScope::AddBreadcrumb(class USentryBreadcrumb** Breadcrumb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "AddBreadcrumb");

	Params::USentryScope_AddBreadcrumb_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Breadcrumb != nullptr)
		*Breadcrumb = Parms.Breadcrumb;

}


// Function Sentry.SentryScope.AddAttachment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryAttachment*           Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void USentryScope::AddAttachment(class USentryAttachment** Attachment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryScope", "AddAttachment");

	Params::USentryScope_AddAttachment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Attachment != nullptr)
		*Attachment = Parms.Attachment;

}


// Class Sentry.SentrySettings
// (None)

class UClass* USentrySettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentrySettings");

	return Clss;
}


// SentrySettings Sentry.Default__SentrySettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USentrySettings* USentrySettings::GetDefaultObj()
{
	static class USentrySettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USentrySettings*>(USentrySettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Sentry.SentrySubsystem
// (None)

class UClass* USentrySubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentrySubsystem");

	return Clss;
}


// SentrySubsystem Sentry.Default__SentrySubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class USentrySubsystem* USentrySubsystem::GetDefaultObj()
{
	static class USentrySubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<USentrySubsystem*>(USentrySubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentrySubsystem.SetUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryUser*                 User                                                             (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor)

void USentrySubsystem::SetUser(class USentryUser** User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "SetUser");

	Params::USentrySubsystem_SetUser_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (User != nullptr)
		*User = Parms.User;

}


// Function Sentry.SentrySubsystem.SetTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// class FString                      Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void USentrySubsystem::SetTag(const class FString& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "SetTag");

	Params::USentrySubsystem_SetTag_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.SetLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESentryLevel            Level                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)

enum class ESentryLevel USentrySubsystem::SetLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "SetLevel");

	Params::USentrySubsystem_SetLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.SetContext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// TMap<class FString, class FString> Values                                                           (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)

TMap<class FString, class FString> USentrySubsystem::SetContext(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "SetContext");

	Params::USentrySubsystem_SetContext_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.RemoveUser
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentrySubsystem::RemoveUser()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "RemoveUser");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.RemoveTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void USentrySubsystem::RemoveTag(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "RemoveTag");

	Params::USentrySubsystem_RemoveTag_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.InitializeWithSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnConfigureSettings                                              (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void USentrySubsystem::InitializeWithSettings(FDelegateProperty_ OnConfigureSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "InitializeWithSettings");

	Params::USentrySubsystem_InitializeWithSettings_Params Parms{};

	Parms.OnConfigureSettings = OnConfigureSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentrySubsystem::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "Initialize");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.ConfigureScope
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnConfigureScope                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void USentrySubsystem::ConfigureScope(FDelegateProperty_* OnConfigureScope)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "ConfigureScope");

	Params::USentrySubsystem_ConfigureScope_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OnConfigureScope != nullptr)
		*OnConfigureScope = Parms.OnConfigureScope;

}


// Function Sentry.SentrySubsystem.Close
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentrySubsystem::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "Close");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.ClearBreadcrumbs
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USentrySubsystem::ClearBreadcrumbs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "ClearBreadcrumbs");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.CaptureUserFeedbackWithParams
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryId*                   EventId                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class FString                      Email                                                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class FString                      Comments                                                         (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)

void USentrySubsystem::CaptureUserFeedbackWithParams(class USentryId** EventId, const class FString& Email, class FString* Comments, class FString* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureUserFeedbackWithParams");

	Params::USentrySubsystem_CaptureUserFeedbackWithParams_Params Parms{};

	Parms.Email = Email;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EventId != nullptr)
		*EventId = Parms.EventId;

	if (Comments != nullptr)
		*Comments = std::move(Parms.Comments);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function Sentry.SentrySubsystem.CaptureUserFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryUserFeedback*         UserFeedback                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void USentrySubsystem::CaptureUserFeedback(class USentryUserFeedback* UserFeedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureUserFeedback");

	Params::USentrySubsystem_CaptureUserFeedback_Params Parms{};

	Parms.UserFeedback = UserFeedback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentrySubsystem.CaptureMessageWithScope
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// FDelegateProperty_                 OnConfigureScope                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// enum class ESentryLevel            Level                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// class USentryId*                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class USentryId* USentrySubsystem::CaptureMessageWithScope(FDelegateProperty_* OnConfigureScope)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureMessageWithScope");

	Params::USentrySubsystem_CaptureMessageWithScope_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OnConfigureScope != nullptr)
		*OnConfigureScope = Parms.OnConfigureScope;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.CaptureMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESentryLevel            Level                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// class USentryId*                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class USentryId* USentrySubsystem::CaptureMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureMessage");

	Params::USentrySubsystem_CaptureMessage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.CaptureEventWithScope
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USentryEvent*                Event                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// FDelegateProperty_                 OnConfigureScope                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class USentryId*                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class USentryId* USentrySubsystem::CaptureEventWithScope(FDelegateProperty_* OnConfigureScope)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureEventWithScope");

	Params::USentrySubsystem_CaptureEventWithScope_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OnConfigureScope != nullptr)
		*OnConfigureScope = Parms.OnConfigureScope;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.CaptureEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryEvent*                Event                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class USentryId*                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class USentryId* USentrySubsystem::CaptureEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "CaptureEvent");

	Params::USentrySubsystem_CaptureEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.AddBreadcrumbWithParams
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      Category                                                         (ConstParm, BlueprintReadOnly, OutParm, Transient)
// class FString                      Type                                                             (Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
// TMap<class FString, class FString> Data                                                             (ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ESentryLevel            Level                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)

enum class ESentryLevel USentrySubsystem::AddBreadcrumbWithParams(class FString* Category, TMap<class FString, class FString> Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "AddBreadcrumbWithParams");

	Params::USentrySubsystem_AddBreadcrumbWithParams_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Category != nullptr)
		*Category = std::move(Parms.Category);

	return Parms.ReturnValue;

}


// Function Sentry.SentrySubsystem.AddBreadcrumb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryBreadcrumb*           Breadcrumb                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void USentrySubsystem::AddBreadcrumb(class USentryBreadcrumb** Breadcrumb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentrySubsystem", "AddBreadcrumb");

	Params::USentrySubsystem_AddBreadcrumb_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Breadcrumb != nullptr)
		*Breadcrumb = Parms.Breadcrumb;

}


// Class Sentry.SentryUser
// (None)

class UClass* USentryUser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryUser");

	return Clss;
}


// SentryUser Sentry.Default__SentryUser
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryUser* USentryUser::GetDefaultObj()
{
	static class USentryUser* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryUser*>(USentryUser::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryUser.SetUsername
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Username                                                         (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

void USentryUser::SetUsername(const class FString& Username)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "SetUsername");

	Params::USentryUser_SetUsername_Params Parms{};

	Parms.Username = Username;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUser.SetIpAddress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      IpAddress                                                        (BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void USentryUser::SetIpAddress(class FString* IpAddress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "SetIpAddress");

	Params::USentryUser_SetIpAddress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IpAddress != nullptr)
		*IpAddress = std::move(Parms.IpAddress);

}


// Function Sentry.SentryUser.SetId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ID                                                               (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)

void USentryUser::SetId(class FString* ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "SetId");

	Params::USentryUser_SetId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ID != nullptr)
		*ID = std::move(Parms.ID);

}


// Function Sentry.SentryUser.SetEmail
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Email                                                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

void USentryUser::SetEmail(const class FString& Email)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "SetEmail");

	Params::USentryUser_SetEmail_Params Parms{};

	Parms.Email = Email;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUser.SetData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> Data                                                             (ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void USentryUser::SetData(TMap<class FString, class FString> Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "SetData");

	Params::USentryUser_SetData_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUser.GetUsername
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryUser::GetUsername()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "GetUsername");

	Params::USentryUser_GetUsername_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryUser.GetIpAddress
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryUser::GetIpAddress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "GetIpAddress");

	Params::USentryUser_GetIpAddress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryUser.GetId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryUser::GetId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "GetId");

	Params::USentryUser_GetId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryUser.GetEmail
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryUser::GetEmail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "GetEmail");

	Params::USentryUser_GetEmail_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryUser.GetData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FString, class FString> ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TMap<class FString, class FString> USentryUser::GetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUser", "GetData");

	Params::USentryUser_GetData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Sentry.SentryUserFeedback
// (None)

class UClass* USentryUserFeedback::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SentryUserFeedback");

	return Clss;
}


// SentryUserFeedback Sentry.Default__SentryUserFeedback
// (Public, ClassDefaultObject, ArchetypeObject)

class USentryUserFeedback* USentryUserFeedback::GetDefaultObj()
{
	static class USentryUserFeedback* Default = nullptr;

	if (!Default)
		Default = static_cast<USentryUserFeedback*>(USentryUserFeedback::StaticClass()->DefaultObject);

	return Default;
}


// Function Sentry.SentryUserFeedback.SetName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (ConstParm, Net, OutParm)

void USentryUserFeedback::SetName(class FString* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "SetName");

	Params::USentryUserFeedback_SetName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function Sentry.SentryUserFeedback.SetEmail
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Email                                                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

void USentryUserFeedback::SetEmail(const class FString& Email)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "SetEmail");

	Params::USentryUserFeedback_SetEmail_Params Parms{};

	Parms.Email = Email;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Sentry.SentryUserFeedback.SetComment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Comments                                                         (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void USentryUserFeedback::SetComment(class FString* Comments)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "SetComment");

	Params::USentryUserFeedback_SetComment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Comments != nullptr)
		*Comments = std::move(Parms.Comments);

}


// Function Sentry.SentryUserFeedback.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USentryId*                   EventId                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void USentryUserFeedback::Initialize(class USentryId** EventId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "Initialize");

	Params::USentryUserFeedback_Initialize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EventId != nullptr)
		*EventId = Parms.EventId;

}


// Function Sentry.SentryUserFeedback.GetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryUserFeedback::GetName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "GetName");

	Params::USentryUserFeedback_GetName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryUserFeedback.GetEmail
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryUserFeedback::GetEmail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "GetEmail");

	Params::USentryUserFeedback_GetEmail_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Sentry.SentryUserFeedback.GetComment
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString USentryUserFeedback::GetComment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SentryUserFeedback", "GetComment");

	Params::USentryUserFeedback_GetComment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


