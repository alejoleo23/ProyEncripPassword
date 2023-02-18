#pragma once
#include <stdio.h>
#include <string.h>
#include "OPERACIONES.h"
#include "rutas.h"
#include "Escritura.h"
#include "Lectura.h"

static int intentos=0;
static int registros=1;

struct DATOS{
		System::Char nombre[50];
		System::Char correo[50];
		System::Char contraseña[50];
		System::Char contraseñaencriptada[50];
		System::Char newContraseña[50];
		System::Char newContraseñaEncriptada[50];
		int var;
	};
	DATOS D[50];

namespace Proyecto_Si_O_si {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  botonSalir;
	protected: 

	protected: 
	private: System::Windows::Forms::Button^  boton1;
	private: System::Windows::Forms::TextBox^  txt3;
	private: System::Windows::Forms::TextBox^  txt2;
	private: System::Windows::Forms::TextBox^  txt1;
	private: System::Windows::Forms::Label^  texto3;
	private: System::Windows::Forms::Label^  texto2;
	private: System::Windows::Forms::ComboBox^  usuario;
	private: System::Windows::Forms::Label^  texto1;
	private: System::Windows::Forms::Label^  TITULO;
	private: System::Windows::Forms::MenuStrip^  menu;

	private: System::Windows::Forms::ToolStripMenuItem^  administrador;

	private: System::Windows::Forms::ToolStripMenuItem^  creaciónDeClavesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  eliminaciónDeClavesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  modificaciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  consultaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  cambioDeUsuarioToolStripMenuItem;
	private: System::Windows::Forms::Button^  boton4;

	private: System::Windows::Forms::Button^  boton3;

	private: System::Windows::Forms::Button^  boton2;
	private: System::Windows::Forms::Button^  boton5;
	private: System::Windows::Forms::Button^  botonCancelar;


	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->botonSalir = (gcnew System::Windows::Forms::Button());
			this->boton1 = (gcnew System::Windows::Forms::Button());
			this->txt3 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->texto3 = (gcnew System::Windows::Forms::Label());
			this->texto2 = (gcnew System::Windows::Forms::Label());
			this->usuario = (gcnew System::Windows::Forms::ComboBox());
			this->texto1 = (gcnew System::Windows::Forms::Label());
			this->TITULO = (gcnew System::Windows::Forms::Label());
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->administrador = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->creaciónDeClavesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eliminaciónDeClavesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cambioDeUsuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->boton4 = (gcnew System::Windows::Forms::Button());
			this->boton3 = (gcnew System::Windows::Forms::Button());
			this->boton2 = (gcnew System::Windows::Forms::Button());
			this->boton5 = (gcnew System::Windows::Forms::Button());
			this->botonCancelar = (gcnew System::Windows::Forms::Button());
			this->menu->SuspendLayout();
			this->SuspendLayout();
			// 
			// botonSalir
			// 
			this->botonSalir->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->botonSalir->Location = System::Drawing::Point(270, 226);
			this->botonSalir->Name = L"botonSalir";
			this->botonSalir->Size = System::Drawing::Size(98, 30);
			this->botonSalir->TabIndex = 21;
			this->botonSalir->Text = L"&Salir";
			this->botonSalir->UseVisualStyleBackColor = true;
			this->botonSalir->Click += gcnew System::EventHandler(this, &MyForm::botonSalir_Click);
			// 
			// boton1
			// 
			this->boton1->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->boton1->Location = System::Drawing::Point(121, 227);
			this->boton1->Name = L"boton1";
			this->boton1->Size = System::Drawing::Size(98, 30);
			this->boton1->TabIndex = 20;
			this->boton1->Text = L"&Ingresar";
			this->boton1->UseVisualStyleBackColor = true;
			this->boton1->Click += gcnew System::EventHandler(this, &MyForm::boton1_Click);
			// 
			// txt3
			// 
			this->txt3->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt3->Location = System::Drawing::Point(245, 176);
			this->txt3->Name = L"txt3";
			this->txt3->Size = System::Drawing::Size(209, 23);
			this->txt3->TabIndex = 19;
			this->txt3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt2
			// 
			this->txt2->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt2->Location = System::Drawing::Point(245, 134);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(209, 23);
			this->txt2->TabIndex = 18;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt1
			// 
			this->txt1->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt1->Location = System::Drawing::Point(245, 89);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(209, 23);
			this->txt1->TabIndex = 17;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txt1->Visible = false;
			// 
			// texto3
			// 
			this->texto3->AutoSize = true;
			this->texto3->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->texto3->Location = System::Drawing::Point(62, 179);
			this->texto3->Name = L"texto3";
			this->texto3->Size = System::Drawing::Size(49, 15);
			this->texto3->TabIndex = 16;
			this->texto3->Text = L"Texto3";
			// 
			// texto2
			// 
			this->texto2->AutoSize = true;
			this->texto2->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->texto2->Location = System::Drawing::Point(62, 134);
			this->texto2->Name = L"texto2";
			this->texto2->Size = System::Drawing::Size(49, 15);
			this->texto2->TabIndex = 15;
			this->texto2->Text = L"Texto2";
			// 
			// usuario
			// 
			this->usuario->BackColor = System::Drawing::SystemColors::Window;
			this->usuario->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->usuario->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->usuario->FormattingEnabled = true;
			this->usuario->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"Luis Boy Chavil"});
			this->usuario->Location = System::Drawing::Point(245, 89);
			this->usuario->Name = L"usuario";
			this->usuario->Size = System::Drawing::Size(209, 23);
			this->usuario->Sorted = true;
			this->usuario->TabIndex = 14;
			// 
			// texto1
			// 
			this->texto1->AutoSize = true;
			this->texto1->Font = (gcnew System::Drawing::Font(L"Footlight MT Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->texto1->Location = System::Drawing::Point(62, 89);
			this->texto1->Name = L"texto1";
			this->texto1->Size = System::Drawing::Size(49, 15);
			this->texto1->TabIndex = 13;
			this->texto1->Text = L"Texto1";
			// 
			// TITULO
			// 
			this->TITULO->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TITULO->Location = System::Drawing::Point(103, 43);
			this->TITULO->Name = L"TITULO";
			this->TITULO->Size = System::Drawing::Size(312, 23);
			this->TITULO->TabIndex = 12;
			this->TITULO->Text = L"TÍTULO";
			this->TITULO->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// menu
			// 
			this->menu->BackColor = System::Drawing::SystemColors::ControlLight;
			this->menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->administrador});
			this->menu->Location = System::Drawing::Point(0, 0);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(507, 24);
			this->menu->TabIndex = 11;
			this->menu->Text = L"menuADMINISTRADOR";
			// 
			// administrador
			// 
			this->administrador->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->creaciónDeClavesToolStripMenuItem, 
				this->eliminaciónDeClavesToolStripMenuItem, this->modificaciónToolStripMenuItem, this->consultaToolStripMenuItem, this->toolStripMenuItem1, 
				this->cambioDeUsuarioToolStripMenuItem});
			this->administrador->Name = L"administrador";
			this->administrador->Size = System::Drawing::Size(146, 20);
			this->administrador->Text = L"Administrador de claves";
			// 
			// creaciónDeClavesToolStripMenuItem
			// 
			this->creaciónDeClavesToolStripMenuItem->Name = L"creaciónDeClavesToolStripMenuItem";
			this->creaciónDeClavesToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->creaciónDeClavesToolStripMenuItem->Text = L"Creación de claves";
			this->creaciónDeClavesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::creaciónDeClavesToolStripMenuItem_Click);
			// 
			// eliminaciónDeClavesToolStripMenuItem
			// 
			this->eliminaciónDeClavesToolStripMenuItem->Name = L"eliminaciónDeClavesToolStripMenuItem";
			this->eliminaciónDeClavesToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->eliminaciónDeClavesToolStripMenuItem->Text = L"Eliminación de claves";
			this->eliminaciónDeClavesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::eliminaciónDeClavesToolStripMenuItem_Click);
			// 
			// modificaciónToolStripMenuItem
			// 
			this->modificaciónToolStripMenuItem->Name = L"modificaciónToolStripMenuItem";
			this->modificaciónToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->modificaciónToolStripMenuItem->Text = L"Modificación";
			this->modificaciónToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::modificaciónToolStripMenuItem_Click);
			// 
			// consultaToolStripMenuItem
			// 
			this->consultaToolStripMenuItem->Name = L"consultaToolStripMenuItem";
			this->consultaToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->consultaToolStripMenuItem->Text = L"Consulta";
			this->consultaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::consultaToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(184, 6);
			// 
			// cambioDeUsuarioToolStripMenuItem
			// 
			this->cambioDeUsuarioToolStripMenuItem->Name = L"cambioDeUsuarioToolStripMenuItem";
			this->cambioDeUsuarioToolStripMenuItem->Size = System::Drawing::Size(187, 22);
			this->cambioDeUsuarioToolStripMenuItem->Text = L"Cambio de usuario";
			this->cambioDeUsuarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cambioDeUsuarioToolStripMenuItem_Click);
			// 
			// boton4
			// 
			this->boton4->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->boton4->Location = System::Drawing::Point(121, 226);
			this->boton4->Name = L"boton4";
			this->boton4->Size = System::Drawing::Size(98, 30);
			this->boton4->TabIndex = 22;
			this->boton4->Text = L"&Modificar";
			this->boton4->UseVisualStyleBackColor = true;
			this->boton4->Visible = false;
			this->boton4->Click += gcnew System::EventHandler(this, &MyForm::boton4_Click);
			// 
			// boton3
			// 
			this->boton3->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->boton3->Location = System::Drawing::Point(121, 227);
			this->boton3->Name = L"boton3";
			this->boton3->Size = System::Drawing::Size(98, 30);
			this->boton3->TabIndex = 23;
			this->boton3->Text = L"&Eliminar";
			this->boton3->UseVisualStyleBackColor = true;
			this->boton3->Visible = false;
			this->boton3->Click += gcnew System::EventHandler(this, &MyForm::boton3_Click);
			// 
			// boton2
			// 
			this->boton2->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->boton2->Location = System::Drawing::Point(121, 227);
			this->boton2->Name = L"boton2";
			this->boton2->Size = System::Drawing::Size(98, 30);
			this->boton2->TabIndex = 24;
			this->boton2->Text = L"&Crear";
			this->boton2->UseVisualStyleBackColor = true;
			this->boton2->Visible = false;
			this->boton2->Click += gcnew System::EventHandler(this, &MyForm::boton2_Click);
			// 
			// boton5
			// 
			this->boton5->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->boton5->Location = System::Drawing::Point(121, 226);
			this->boton5->Name = L"boton5";
			this->boton5->Size = System::Drawing::Size(98, 30);
			this->boton5->TabIndex = 25;
			this->boton5->Text = L"&Consultar";
			this->boton5->UseVisualStyleBackColor = true;
			this->boton5->Visible = false;
			this->boton5->Click += gcnew System::EventHandler(this, &MyForm::boton5_Click);
			// 
			// botonCancelar
			// 
			this->botonCancelar->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->botonCancelar->Location = System::Drawing::Point(270, 226);
			this->botonCancelar->Name = L"botonCancelar";
			this->botonCancelar->Size = System::Drawing::Size(98, 30);
			this->botonCancelar->TabIndex = 26;
			this->botonCancelar->Text = L"&Cancelar";
			this->botonCancelar->UseVisualStyleBackColor = true;
			this->botonCancelar->Visible = false;
			this->botonCancelar->Click += gcnew System::EventHandler(this, &MyForm::botonCancelar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(507, 302);
			this->Controls->Add(this->botonCancelar);
			this->Controls->Add(this->boton5);
			this->Controls->Add(this->boton2);
			this->Controls->Add(this->boton3);
			this->Controls->Add(this->boton4);
			this->Controls->Add(this->botonSalir);
			this->Controls->Add(this->boton1);
			this->Controls->Add(this->txt3);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->texto3);
			this->Controls->Add(this->texto2);
			this->Controls->Add(this->usuario);
			this->Controls->Add(this->texto1);
			this->Controls->Add(this->TITULO);
			this->Controls->Add(this->menu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Encriptado";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Inicializacion
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
		{
			TITULO->Text="Inicio de Sesión";
			texto1->Text="Usuario:";
			texto2->Text="Login:";
			texto3->Text="Contraseña:";
			botonSalir->Text="Salir";
			txt3->Text="";
			this->txt2->Visible = true;
			txt2->ReadOnly = true;

			char nombre_adm[50]="Luis Boy Chavil";
			char correo_adm[50]="LBC01@unitru.edu.pe";
			char contraseña_adm[50]="lboy";
			char contraseñaencriptada_adm[17]="blyo";
			char newcontraseña_adm[50]="";
			char newcontraseñaencriptada_adm[17]="";
			
			
			for (int i = 0; i < 18; i++)
				D[0].nombre[i]=nombre_adm[i];
			for (int i = 0; i < 19; i++)
				D[0].correo[i]=correo_adm[i];
			for (int i = 0; i < 9; i++)
				D[0].contraseña[i]=contraseña_adm[i];
			for (int i = 0; i < 9; i++)
				D[0].contraseñaencriptada[i]=contraseñaencriptada_adm[i];
			for (int i = 0; i < 9; i++)
				D[0].newContraseña[i]=newcontraseña_adm[i];
			for (int i = 0; i < 9; i++)
				D[0].newContraseñaEncriptada[i]=newcontraseñaencriptada_adm[i];

			
			this->menu->Visible = false;
		}

		//Botones Salir y Cancelar
private: System::Void botonCancelar_Click(System::Object^  sender, System::EventArgs^  e)
		{
			txt1->Text="";
			txt2->Text="";
			txt3->Text="";
		}
private: System::Void botonSalir_Click(System::Object^  sender, System::EventArgs^  e)
		{
			Application::Exit();
		}

		 //Opciones de Menus

private: System::Void creaciónDeClavesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//Modificando ventana
			this->TITULO->Visible = true;
			TITULO->Text="Crear Usuario";
			
			
			botonCancelar->Visible=true;
			botonCancelar->Text="Limpiar";
			botonSalir->Visible=false;

			this->texto1->Visible = true;
			this->texto2->Visible = true;
			this->texto3->Visible = true;
			texto1->Text = "Nombre";
			texto2->Text = "Login";
			texto3->Text = "Contraseña";

			this->txt1->Visible = true;
			txt1->Visible = true;
			txt1->Text = "";
			txt1->ReadOnly = false;

			this->txt2->Visible = true;
			txt2->ReadOnly = true;
			txt2->Text = "";

			this->txt3->Visible = true;
			txt3->ReadOnly = true;
			txt3->Text = "";

			boton1->Visible=false;
			boton2->Visible=true;
			boton3->Visible=false;
			boton4->Visible=false;
			boton5->Visible=false;

			usuario->Visible=false;
			
			}
private: System::Void cambioDeUsuarioToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//Modificando ventana
			this->TITULO->Visible = true;
			TITULO->Text="Inicio de Sesión";
			this->menu->Visible = false;
			
			botonCancelar->Visible=false;
			botonSalir->Visible=true;

			this->texto1->Visible = true;
			this->texto2->Visible = true;
			this->texto3->Visible = true;
			texto1->Text = "Usuario:";
			texto2->Text = "Login:";
			texto3->Text = "Contraseña:";

			this->txt1->Visible = false;

			this->txt2->Visible = true;
			txt2->ReadOnly = true;
			txt2->Text = "";

			this->txt3->Visible = true;
			txt3->ReadOnly = false;
			txt3->Text = "";

			boton2->Visible=false;
			boton1->Visible=true;
			boton3->Visible=false;
			boton4->Visible=false;
			boton5->Visible=false;
			usuario->Visible=true;
		}
private: System::Void consultaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//Modificando ventana
			this->TITULO->Visible = true;
			TITULO->Text="Consulta Usuario";
			
			botonCancelar->Text="Limpiar";
			botonCancelar->Visible=true;
			botonSalir->Visible=false;

			this->texto1->Visible = true;
			this->texto2->Visible = true;
			this->texto3->Visible = true;
			texto1->Text = "Nombre";
			texto2->Text = "Login";
			texto3->Text = "Contraseña";

			this->txt1->Visible = true;
			txt1->Visible = true;
			txt1->Text = "";
			txt1->ReadOnly = false;

			this->txt2->Visible = true;
			txt2->ReadOnly = true;
			txt2->Text = "";

			this->txt3->Visible = true;
			txt3->ReadOnly = true;
			txt3->Text = "";

			boton1->Visible=false;
			boton2->Visible=false;
			boton3->Visible=false;
			boton4->Visible=false;
			boton5->Visible=true;

			usuario->Visible=false;
		}
private: System::Void eliminaciónDeClavesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//Modificando ventana
			this->TITULO->Visible = true;
			TITULO->Text="Eliminar Usuario";
			
			botonCancelar->Text="Limpiar";
			botonCancelar->Visible=true;
			botonSalir->Visible=false;

			this->texto1->Visible = true;
			this->texto2->Visible = true;
			this->texto3->Visible = true;
			texto1->Text = "Nombre";
			texto2->Text = "Contraseña";
			texto3->Text = "Repetir Contraseña";

			this->txt1->Visible = false;
			txt1->Text = "";
			txt1->ReadOnly = false;

			this->txt2->Visible = true;
			txt2->ReadOnly = false;
			txt2->Text = "";

			this->txt3->Visible = true;
			txt3->ReadOnly = false;
			txt3->Text = "";

			boton1->Visible=false;
			boton2->Visible=false;
			boton3->Visible=true;
			boton4->Visible=false;
			boton5->Visible=false;

			usuario->Visible=true;
		}
private: System::Void modificaciónToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//Modificando ventana
			this->TITULO->Visible = true;
			TITULO->Text="Modificar Usuario";
			
			
			botonCancelar->Visible=true;
			botonSalir->Visible=false;

			this->texto1->Visible = true;
			this->texto2->Visible = true;
			this->texto3->Visible = true;
			texto1->Text = "Nombre";
			texto2->Text = "Contraseña";
			texto3->Text = "Nueva Contraseña";

			this->txt1->Visible = false;
			txt1->Text = "";
			txt1->ReadOnly = false;

			this->txt2->Visible = true;
			txt2->ReadOnly = false;
			txt2->Text = "";

			this->txt3->Visible = true;
			txt3->ReadOnly = false;
			txt3->Text = "";

			boton1->Visible=false;
			boton2->Visible=false;
			boton3->Visible=false;
			boton4->Visible=true;
			boton5->Visible=false;

			usuario->Visible=true;
		}
		 //Botones
private: System::Void boton1_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//INICIO DE SESION
			OPERACIONES O;
			rutas R;
			
			int largonombre=usuario->Text->Length;
			System::Char User[50];
				for (int i = 0; i < largonombre; i++)
					User[i]=Convert::ToChar(usuario->Text->Substring(i,1));
			int aux=0;
			if(largonombre>10 && largonombre&2!=0){
				aux=largonombre-1;
			}
			else{aux=largonombre;}
			//Buscando la posicion del registro segun el nombre
			int posicion=-1;
			for (int i = 0; i < 50; i++){
				bool verificacion=O.buscar(D[i].nombre,User,aux);
				if (verificacion==true)
					posicion=i;
			}
			
			//Mostrando el correo
			System::String^ email;
			for (int i = 0; i < 19; i++){
				email+=D[posicion].correo[i];
			}
			txt2->Text=email;
			
		
			//Verificando la contraseña ingresada
			if (intentos==3)
			{
				MessageBox::Show("Se excedio las veces de acceso al programa, este se cerrara, ADIOS :)","Notificación");
				Application::Exit();
			}
			else if (posicion==-1)
			{
				MessageBox::Show("Usuario No Encontrado :(","Notificación");
				intentos++;
			}
			else if (posicion>-1){
				
				//contraseña ingresada
				int largocontra=txt3->Text->Length;
				System::Char Cingresada[50];
				for (int i = 0; i < largocontra; i++)
					Cingresada[i]=Convert::ToChar(txt3->Text->Substring(i,1));

					/*encriptando la contraseña ingresada*/
				int l=R.tamaño_matriz(largocontra);
				System::Char Aux[50][50];
				for (int i = 0; i < l; i++)
					for (int j = 0; j < l; j++)
						Aux[i][j]='\0';
						
				System::Char CEingresada[50];
				for (int i = 0; i < largocontra; i++)
					CEingresada[i]='\0';

				R.escritura(Aux,Cingresada,l);
				R.lectura(Aux,CEingresada,l);
				bool verificacion=O.buscar(D[posicion].contraseñaencriptada,CEingresada,largocontra);

				if (verificacion==false){
					verificacion=O.buscar(D[posicion].newContraseñaEncriptada,CEingresada,largocontra);}
				if(verificacion==true){
					MessageBox::Show("Inicio de Sesión Exitosa","Notificación");
					intentos=0;
					//Mostando la barra de operaciones
					this->menu->Visible = true;

					//limpiando ventana
					this->TITULO->Visible = false;
					this->texto1->Visible = false;
					this->texto2->Visible = false;
					this->texto3->Visible = false;
					this->usuario->Visible = false;
					this->txt2->Visible = false;
					this->txt3->Visible = false;
					this->boton1->Visible = false;
					this->botonSalir->Visible = false;

				}
				else if (verificacion==false){
					MessageBox::Show("Error al ingresar la contraseña :(","Notificación");
					intentos++;
				}
			
			}
			
		}
private: System::Void boton2_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//AÑADIR USUARIO

			OPERACIONES O;
			Escritura E;
			Lectura L;

			System::String^ nombre=txt1->Text;
			int largonombre=txt1->Text->Length;

			System::Char New_User[50];
			for (int i = 0; i < largonombre; i++){
				New_User[i]=Convert::ToChar(txt1->Text->Substring(i,1));
			}
			//guardando nombre
			for (int i = 0; i < largonombre; i++){
				D[registros].nombre[i]=Convert::ToChar(txt1->Text->Substring(i,1));
			}

			//generando contraseña original
			O.generar_contraseñaoriginal(New_User,largonombre,D[registros].contraseña);

			//genere el numero
			System::Char numero_reg=Convert::ToChar(Convert::ToString(registros+1));

			//generando correo
			O.generar_correo(New_User,largonombre,D[registros].correo,numero_reg);

			//generar contraseña encriptada
			System::Char Aux[50][50];
			for (int i = 0; i < 50; i++)
				for (int j = 0; j < 50; j++)
					Aux[i][j]='\0';
			System::Char letrAux;
			int l=E.tamaño_matriz(O.contador_letras(D[registros].contraseña));
			E.Recorrido(D[registros].contraseña[0],l,Aux,D[registros].contraseña);
			if(D[registros].nombre[0]==D[registros].nombre[largonombre-1]){
				letrAux=D[registros].nombre[largonombre-2];
			}
			else{
				letrAux=D[registros].nombre[largonombre-1];
			}

			L.Recorrido(letrAux,l,Aux,D[registros].contraseñaencriptada);

			//mostrando los datos creados
			System::String^ xusuario;
			for (int i = 0; i < largonombre; i++){
				xusuario+=D[registros].nombre[i];
			}

			System::String^ xcorreo;
			for (int i = 0; i < 19; i++){
				xcorreo+=D[registros].correo[i];
			}
			
			System::String^ xcontraseña;
			for (int i = 0; i < O.contador_letras(D[registros].contraseña) ; i++){
				xcontraseña+=D[registros].contraseña[i];
			}

			System::String^ xcontraseñaencriptada;
			for (int i = 0; i < O.contador_letras(D[registros].contraseñaencriptada) ; i++){
				xcontraseñaencriptada+=D[registros].contraseñaencriptada[i];
			}

			usuario->Items->Add(xusuario);
			
			txt1->Text=xusuario;
			txt2->Text=xcorreo;
			txt3->Text=xcontraseña;

			registros++;
			MessageBox::Show("Usuario Registrado :)\nNueva Contraseña Encriptada: "+xcontraseñaencriptada,"Notificación");

		
		}
private: System::Void boton3_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//ELIMINACION
			OPERACIONES O;
			
			int largonombre=usuario->Text->Length;

			System::Char User[50];
				for (int i = 0; i < largonombre; i++)
					User[i]=Convert::ToChar(usuario->Text->Substring(i,1));
			
			//Buscando la posicion del registro segun el nombre
			int posicion=-1;
			for (int i = 0; i < 50; i++){
				bool verificacion=O.buscar(D[i].nombre,User,largonombre);
				if (verificacion==true)
					posicion=i;
			}
						
			
			if (posicion==-1)
			{
				MessageBox::Show("Usuario No Encontrado :(","Notificación");

			}
			else if (posicion>-1){
						int largocontra=txt3->Text->Length;
						//Verificanco el ingreso de las contraseñas
						System::String^ contra1=txt2->Text;
						System::String^ contra2=txt3->Text;
						System::String^ contraoriginal;
						System::Char contraAux[50];
						if(contra1==contra2){
						for (int i = 0; i < largocontra; i++)
							contraAux[i]=Convert::ToChar(txt3->Text->Substring(i,1));
						}
						bool verificacion=O.buscar(D[posicion].contraseña,contraAux,largocontra);
						if(verificacion==true){
						for (int i = 0; i < O.contador_letras(D[posicion].contraseña); i++)
							contraoriginal+=Convert::ToString(D[posicion].contraseña[i]);
						}
						else{
							for (int i = 0; i < O.contador_letras(D[posicion].newContraseña); i++)
							contraoriginal+=Convert::ToString(D[posicion].newContraseña[i]);
						}
						if (contra1==contra2 && contra1==contraoriginal && contra2==contraoriginal){
							//Proceso de eliminado

							for (int i = 0; i < O.contador_letras(D[posicion].nombre); i++)
								D[posicion].nombre[i]='\0';

							for (int i = 0; i < O.contador_letras(D[posicion].correo); i++)
								D[posicion].correo[i]='\0';

							for (int i = 0; i < O.contador_letras(D[posicion].contraseña); i++)
								D[posicion].contraseña[i]='\0';

							for (int i = 0; i < O.contador_letras(D[posicion].contraseñaencriptada); i++)
								D[posicion].contraseñaencriptada[i]='\0';

							usuario->Items->Remove(usuario->Text);
							txt2->Text="";
							txt3->Text="";
							MessageBox::Show("Usuario Eliminado :)","Notificación");	
						}

						else
							MessageBox::Show("Las contraseñas no son identicas :(","Notificación");					
			}

		}
private: System::Void boton4_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//MODIFICACION
			OPERACIONES O;
			Escritura E;
			Lectura L;
			
			int largonombre=usuario->Text->Length;
			int aux=0;
			if(largonombre>10 && largonombre&2!=0){
				aux=largonombre-1;
			}
			else{aux=largonombre;}
			System::Char User[50];
			for (int i = 0; i < largonombre; i++)
					User[i]=Convert::ToChar(usuario->Text->Substring(i,1));
			
			//Buscando la posicion del registro segun el nombre
			int posicion=-1;
			for (int i = 0; i < 50; i++){
				bool verificacion=O.buscar(D[i].nombre,User,aux);
				if (verificacion==true)
					posicion=i;
			}
						
			
			if (posicion==-1)
			{
				MessageBox::Show("Usuario No Encontrado :(","Notificación");

			}
			else if (posicion>-1){
						//Modificando las contraseñas				
				
				System::Char ContraIngresada[50];
				int largocontraingresada=txt2->Text->Length;
				int aux2=0;
				if(largocontraingresada>10 && largocontraingresada&2!=0){
					aux2=largocontraingresada-1;
			}
				else{aux2=largocontraingresada;}
				for (int i = 0; i < largocontraingresada; i++)
					ContraIngresada[i]=Convert::ToChar(txt2->Text->Substring(i,1));
				
					/*verificando la contraseña ingresada*/
				bool verificacion;
				if(D[posicion].var==1){
					verificacion=O.buscar(D[posicion].newContraseña,ContraIngresada,aux2);
				}
				else{
					verificacion=O.buscar(D[posicion].contraseña,ContraIngresada,aux2);
				}
				if (verificacion==true)
				{

					System::Char ContraNueva[50];
					int largocontranueva=txt3->Text->Length;
					for (int i = 0; i < largocontranueva; i++)
						ContraNueva[i]=Convert::ToChar(txt3->Text->Substring(i,1));

					//grabando nuevos datos
					for (int i = 0; i < largocontranueva; i++)
						D[posicion].newContraseña[i]=ContraNueva[i];

					System::Char Aux[50][50];
					for (int i = 0; i < 50; i++)
						for (int j = 0; j < 50; j++)
							Aux[i][j]='\0';

					System::Char letrAux;
					int l=E.tamaño_matriz(O.contador_letras(D[posicion].newContraseña));
					E.Recorrido(D[posicion].nombre[0],l,Aux,D[posicion].newContraseña);
					if(D[posicion].nombre[0]==D[posicion].nombre[largonombre-1]){
						letrAux=D[posicion].nombre[largonombre-2];
					}
					else{
					letrAux=D[posicion].nombre[largonombre-1];
					}
	
					L.Recorrido(letrAux,l,Aux,D[posicion].newContraseñaEncriptada);

					//VERIFICACION
					System::String^ xcontraseñaencriptada;
					for (int i = 0; i < l*l ; i++){
						xcontraseñaencriptada+=D[posicion].newContraseñaEncriptada[i];


					}
					D[posicion].var=1;
					for (int i = 0; i < O.contador_letras(D[posicion].contraseña); i++)
							D[posicion].contraseña[i]='\0';

					for (int i = 0; i < O.contador_letras(D[posicion].contraseñaencriptada); i++)
							D[posicion].contraseñaencriptada[i]='\0';

			MessageBox::Show("Usuario Registrado :)\nNueva Contraseña Encriptada: "+xcontraseñaencriptada,"Notificación");


					MessageBox::Show("Usuario Modificado :)","Notificación");	
				}
				else
					MessageBox::Show("Error al ingresar la contraseña original :(","Notificación");					
			}

		}
private: System::Void boton5_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//CONSULTA
			OPERACIONES O;
			
			int largonombre=txt1->Text->Length;
			int aux=0;
			if(largonombre>10 && largonombre&2!=0){
				aux=largonombre-1;
			}
			else{aux=largonombre;}
			System::Char User[50];
				for (int i = 0; i < largonombre; i++)
					User[i]=Convert::ToChar(txt1->Text->Substring(i,1));
			
			//Buscando la posicion del registro segun el nombre

			int posicion=-1;
			for (int i = 0; i < 50; i++){
				bool verificacion=O.buscar(D[i].nombre,User,aux);
				if (verificacion==true)
					posicion=i;
			}
						
			
			if (posicion==-1)
			{
				MessageBox::Show("Usuario No Encontrado :(","Notificación");
				intentos++;
			}
			else if (posicion>-1){
							
					MessageBox::Show("Usuario Encontrado :)","Notificación");
					
						System::String^ xcorreo;
						for (int i = 0; i < 19; i++){
							xcorreo+=D[posicion].correo[i];
						}
						System::String^ xcontraseña;
						if(D[posicion].var==1){
						for (int i = 0; i < O.contador_letras(D[posicion].newContraseña) ; i++){
							xcontraseña+=D[posicion].newContraseña[i];
						}
						}
						else{
							for (int i = 0; i < O.contador_letras(D[posicion].contraseña) ; i++){
							xcontraseña+=D[posicion].contraseña[i];
						}
						}
						txt2->Text=xcorreo;
						txt3->Text=xcontraseña;

			}
		}
};
}
