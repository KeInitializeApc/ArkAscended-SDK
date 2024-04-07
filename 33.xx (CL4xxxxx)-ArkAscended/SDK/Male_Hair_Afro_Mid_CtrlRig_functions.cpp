#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// RigVMBlueprintGeneratedClass Male_Hair_Afro_Mid_CtrlRig.Male_Hair_Afro_Mid_CtrlRig_C
// (None)

class UClass* UMale_Hair_Afro_Mid_CtrlRig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Male_Hair_Afro_Mid_CtrlRig_C");

	return Clss;
}


// Male_Hair_Afro_Mid_CtrlRig_C Male_Hair_Afro_Mid_CtrlRig.Default__Male_Hair_Afro_Mid_CtrlRig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMale_Hair_Afro_Mid_CtrlRig_C* UMale_Hair_Afro_Mid_CtrlRig_C::GetDefaultObj()
{
	static class UMale_Hair_Afro_Mid_CtrlRig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMale_Hair_Afro_Mid_CtrlRig_C*>(UMale_Hair_Afro_Mid_CtrlRig_C::StaticClass()->DefaultObject);

	return Default;
}


// RigVMMemoryStorageGeneratorClass Male_Hair_Afro_Mid_CtrlRig.RigVMMemory_Literal
// (None)

class UClass* URigVMMemory_Literal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMMemory_Literal");

	return Clss;
}


// RigVMMemory_Literal Male_Hair_Afro_Mid_CtrlRig.Default__RigVMMemory_Literal
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URigVMMemory_Literal* URigVMMemory_Literal::GetDefaultObj()
{
	static class URigVMMemory_Literal* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMMemory_Literal*>(URigVMMemory_Literal::StaticClass()->DefaultObject);

	return Default;
}


// RigVMMemoryStorageGeneratorClass Male_Hair_Afro_Mid_CtrlRig.RigVMMemory_Work
// (None)

class UClass* URigVMMemory_Work::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMMemory_Work");

	return Clss;
}


// RigVMMemory_Work Male_Hair_Afro_Mid_CtrlRig.Default__RigVMMemory_Work
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URigVMMemory_Work* URigVMMemory_Work::GetDefaultObj()
{
	static class URigVMMemory_Work* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMMemory_Work*>(URigVMMemory_Work::StaticClass()->DefaultObject);

	return Default;
}

}


