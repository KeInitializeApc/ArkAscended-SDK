#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// RigVMBlueprintGeneratedClass Female_Hair_Mohawk_Mid_CtrlRig.Female_Hair_Mohawk_Mid_CtrlRig_C
// (None)

class UClass* UFemale_Hair_Mohawk_Mid_CtrlRig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Female_Hair_Mohawk_Mid_CtrlRig_C");

	return Clss;
}


// Female_Hair_Mohawk_Mid_CtrlRig_C Female_Hair_Mohawk_Mid_CtrlRig.Default__Female_Hair_Mohawk_Mid_CtrlRig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFemale_Hair_Mohawk_Mid_CtrlRig_C* UFemale_Hair_Mohawk_Mid_CtrlRig_C::GetDefaultObj()
{
	static class UFemale_Hair_Mohawk_Mid_CtrlRig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFemale_Hair_Mohawk_Mid_CtrlRig_C*>(UFemale_Hair_Mohawk_Mid_CtrlRig_C::StaticClass()->DefaultObject);

	return Default;
}


// RigVMMemoryStorageGeneratorClass Female_Hair_Mohawk_Mid_CtrlRig.RigVMMemory_Literal
// (None)

class UClass* URigVMMemory_Literal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMMemory_Literal");

	return Clss;
}


// RigVMMemory_Literal Female_Hair_Mohawk_Mid_CtrlRig.Default__RigVMMemory_Literal
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URigVMMemory_Literal* URigVMMemory_Literal::GetDefaultObj()
{
	static class URigVMMemory_Literal* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMMemory_Literal*>(URigVMMemory_Literal::StaticClass()->DefaultObject);

	return Default;
}


// RigVMMemoryStorageGeneratorClass Female_Hair_Mohawk_Mid_CtrlRig.RigVMMemory_Work
// (None)

class UClass* URigVMMemory_Work::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMMemory_Work");

	return Clss;
}


// RigVMMemory_Work Female_Hair_Mohawk_Mid_CtrlRig.Default__RigVMMemory_Work
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URigVMMemory_Work* URigVMMemory_Work::GetDefaultObj()
{
	static class URigVMMemory_Work* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMMemory_Work*>(URigVMMemory_Work::StaticClass()->DefaultObject);

	return Default;
}

}


